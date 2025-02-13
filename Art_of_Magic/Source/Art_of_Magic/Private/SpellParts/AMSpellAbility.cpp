// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellParts\AMSpellAbility.h"

void UAMSpellAbility::initialize_Implementation()
{
	initialize_CPP();
}

void UAMSpellAbility::SetActiveSpell(UAMSpell* Spell)
{
	AttributesCost.Empty();
	SpellInstance = Spell;
	AttributesCost.Add(FGameplayTag::RequestGameplayTag(FName("Gameplay.Attribute.Mana")), SpellInstance->GetSpellCost());
}

void UAMSpellAbility::initialize_CPP()
{
	SpellInstance = NewObject<UAMSpell>(this, DefaultSpell);
	SpellInstance->Initialize();
	AttributesCost.Add(FGameplayTag::RequestGameplayTag(FName("Gameplay.Attribute.Mana")), SpellInstance->GetSpellCost());
}
