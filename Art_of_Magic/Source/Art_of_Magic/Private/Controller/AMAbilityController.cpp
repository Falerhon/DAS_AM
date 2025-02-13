// Fill out your copyright notice in the Description page of Project Settings.


#include "Controller/AMAbilityController.h"

#include "SpellParts/AMSpellAbility.h"

void UAMAbilityController::SetSpellInstance(FGameplayTag AbilitySlot, UAMSpell* Spell)
{
	//Gets the instance of the ability
	UDASAbility* spellToChange = *AbilitiesInstance.Find(AbilitySlot);

	if(!spellToChange->IsValidLowLevel())
	{
		UE_LOG(LogTemp, Warning, TEXT("ABILITY SLOT INVALID"));
		return;
	}

	//Check if the ability is a SpellAbility and sets it's spell if it is
	if(auto s = Cast<UAMSpellAbility>(spellToChange))
	{
		s->SetActiveSpell(Spell);
		return;
	}
	UE_LOG(LogTemp, Warning, TEXT("COULD NOT CHANGE SPELL INSTANCE"));
}

UAMSpellAbility* UAMAbilityController::GetSpellInstance(FGameplayTag AbilitySlot)
{
	UDASAbility* spellToGet = *AbilitiesInstance.Find(AbilitySlot);
	if(const auto spell = Cast<UAMSpellAbility>(spellToGet))
	{
		return spell;
	}

	return nullptr;
}
