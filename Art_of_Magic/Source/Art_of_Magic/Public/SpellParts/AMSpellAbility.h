// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMSpell.h"
#include "Abilities/DASAbility.h"
#include "AMSpellAbility.generated.h"

/**
 * Very similar to a DASAbility, but contains a spell.
 * Also allows the modification of it's current spell at
 * runtime.
 */
UCLASS()
class ART_OF_MAGIC_API UAMSpellAbility : public UDASAbility
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spell")
	TSubclassOf<UAMSpell> DefaultSpell;
	//Changes the current spell linked to this ability
	UFUNCTION(BlueprintCallable)
	void SetActiveSpell(UAMSpell* Spell);
	//BP implementation of the initialization
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void initialize();
protected:
	//C++ implementation of the initialization
	//instantiate the spell and sets this ability's cost
	UFUNCTION()
	void initialize_CPP();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Spell")
	UAMSpell* SpellInstance;
private:
	
};
