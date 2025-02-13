// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMSpellTable.h"
#include "Blueprint/UserWidget.h"
#include "AMCrafterWidget.generated.h"

/**
 * Widget for the spell crafting table
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDataUpdate);

UCLASS()
class ART_OF_MAGIC_API UAMCrafterWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetTable(AAMSpellTable* Table) {LinkedTable = Table;};
	//Update the list of effects
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UpdateEffects();
	//Update the list of casting method
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UpdateCastingMethod();
	//Update the list of augments
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void UpdateAugment(UAMEffect* CurrentEffect);
	//Sends the crafter the selected effects;
	UFUNCTION(BlueprintCallable)
	void ConfirmSpell(FGameplayTag SpellSlot);

	//Delegates
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnDataUpdate OnDataUpdateDelegate;

protected:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	AAMSpellTable* LinkedTable;

	//Update the list of effects
	UFUNCTION()
	void UpdateEffects_CPP();
	//Update the list of casting methods
	UFUNCTION()
	void UpdateCastingMethod_CPP();
	//Update the list of augments
	UFUNCTION()
	void UpdateAugment_CPP(UAMEffect* CurrentEffect);

	//Objects available to be used in a spell
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UAMEffect*> AvailableEffect;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UAMCastingMethod*> AvailableCastingMethod;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<UAMAugment*> AvailableAugments;

	//Selected effects for the spell
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<FAugmentedEffects> SelectedEffect;
};
