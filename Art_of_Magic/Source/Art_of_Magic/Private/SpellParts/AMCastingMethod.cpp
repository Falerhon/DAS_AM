// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellParts\AMCastingMethod.h"

#include "SpellParts\AMSpell.h"

void UAMCastingMethod::TriggerEffect_CPP()
{
	Super::TriggerEffect_CPP();
}

void UAMCastingMethod::EffectEnd_CPP()
{
	ParentSpell->SetSpellLocation(Location);
	Super::EffectEnd_CPP();
}
