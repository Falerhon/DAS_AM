// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/DASAbilityController.h"
#include "AMAbilityController.generated.h"

class UAMSpellAbility;
class UAMSpell;
/**
 * Same as a  UDASAbilityController, but allows
 * the modification of the spells in the ability
 */
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ART_OF_MAGIC_API UAMAbilityController : public UDASAbilityController
{
	GENERATED_BODY()

public:
	//Sets the spell used by the USpellAbility in the given slot
	UFUNCTION(BlueprintCallable)
	void SetSpellInstance(FGameplayTag AbilitySlot, UAMSpell* Spell);

	//Gets the spell instance in the given slot
	UFUNCTION(BlueprintCallable)
	UAMSpellAbility* GetSpellInstance(FGameplayTag AbilitySlot);
};
