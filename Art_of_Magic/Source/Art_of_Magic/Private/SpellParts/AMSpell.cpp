// Fill out your copyright notice in the Description page of Project Settings.


#include "..\Public\SpellParts\AMSpell.h"

#include "SpellParts\AMCastingMethod.h"


void UAMSpell::AddEffects(const TArray<FAugmentedEffects>& effects)
{
	Caster = nullptr;
	CurrentEffectIndex = 0;
	SpellCost = 0;

	Effects.Append(effects);
}

void UAMSpell::Initialize()
{
	InstantiateEffects();
}

void UAMSpell::InstantiateEffects()
{
	//Reset the variables of the spell
	EffectsInstance.Empty();
	SpellCost = 0;
	for (auto augEff : Effects)
	{
		UAMEffect* e = NewObject<UAMEffect>(this, augEff.Effect);
		e->SetParentSpell(this);
		e->AddAugments(augEff.Augments);
		e->SetShouldKeepTargets(augEff.KeepTargets);
		e->Initiate();
		SpellCost += e->GetCost();
		EffectsInstance.AddUnique(e);
	}
}

void UAMSpell::PreCast()
{
	//We make the effects prepare themselves to be casted
	for(const auto effect : EffectsInstance)
	{
		effect->PreCastPrepare();
	}
}

void UAMSpell::Cast()
{
	//Prepare the effects
	PreCast();
	//Make sure we have effects
	if(EffectsInstance.IsEmpty())
	{
		SpellEnd();
		return;
	}
	//Starts the effects sequence
	TriggerEffect(EffectsInstance[0]);
}

void UAMSpell::TriggerEffect(UAMEffect* Effect)
{
	//Bind to listen to the end of the effect
	Effect->OnEffectComplete.AddDynamic(this, &UAMSpell::EffectOver);

	Effect->AddTargets(CurrentTargets);
	Effect->TriggerEffect();
	
}

void UAMSpell::NextEffect()
{
	CurrentEffectIndex++;
	TriggerEffect(EffectsInstance[CurrentEffectIndex]);
}

//Called by the effect over event
void UAMSpell::EffectOver(TArray<AActor*> Targets, bool shouldKeepTargets)
{
	//We handle if we need to keep the targets or not
	if(shouldKeepTargets)
	{
		for (auto target : Targets)
		{
			CurrentTargets.AddUnique(target);
		}
	} else
	{
		ResetTargets();
	}

	//If there are still effects to trigger we trigger them
	//If not, we are at the end of the spell
	if(Effects.Num() > CurrentEffectIndex + 1)
	{
		NextEffect();
	} else
	{
		SpellEnd();
	}
}

void UAMSpell::AddTarget(AActor* target)
{
	CurrentTargets.Add(target);
}

void UAMSpell::ResetTargets()
{
	CurrentTargets.Empty();
}

void UAMSpell::SpellEnd()
{
	//Make sure to unbind from all effect complete events
	for (auto effect : EffectsInstance)
	{
		effect->OnEffectComplete.RemoveAll(this);
	}

	//Reset variables and broadcast the end of the spell
	ResetTargets();
	CurrentEffectIndex = 0;
	OnSpellCompleteDelegate.Broadcast();
}
