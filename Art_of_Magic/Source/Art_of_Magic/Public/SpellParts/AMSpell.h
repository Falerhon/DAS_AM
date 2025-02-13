// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMEffect.h"
#include "UObject/NoExportTypes.h"
#include "DASActor.h"
#include "AMSpell.generated.h"

USTRUCT(BlueprintType)
struct FAugmentedEffects
{
	GENERATED_USTRUCT_BODY()
	//Effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<UAMEffect> Effect;
	//Augments associated
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<TSubclassOf<UAMAugment>> Augments;
	//If the targets should be passed to the next node
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool KeepTargets;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpellComplete);
class UAMCastingMethod;
/**
 * Container for the effects.
 * Handles the triggering sequence of the effects
 */
UCLASS(BlueprintType, Blueprintable, Abstract)
class ART_OF_MAGIC_API UAMSpell : public UObject
{
	GENERATED_BODY()
	
public:
	//Needs to associate the caster and a base cost in this constructor
	UAMSpell() {Caster = nullptr; CurrentEffectIndex = 0; SpellCost = 0;};
	//Add effects to the spell
	UFUNCTION(BlueprintCallable)
	void AddEffects(const TArray<FAugmentedEffects>& effects);
	//Instantiate the spell's component
	UFUNCTION(BlueprintCallable)
	void Initialize();
	
	//Instantiate the effects
	UFUNCTION(BlueprintCallable)
	void InstantiateEffects();
	//Called before the start of the first effect of the spell
	UFUNCTION(BlueprintCallable)
	void PreCast();
	//Trigger the casting method
	UFUNCTION(BlueprintCallable)
	void Cast();
	//Start triggering the spell's effect
	UFUNCTION(BlueprintCallable)
	void TriggerEffect(UAMEffect* Effect);
	//Try to trigger the next effect
	UFUNCTION(BlueprintCallable)
	void NextEffect();
	//Try to trigger the next effect
	UFUNCTION(BlueprintCallable)
	void EffectOver(TArray<AActor*> Targets, bool shouldKeepTargets);
	//Try to trigger the next effect
	UFUNCTION(BlueprintCallable)
	void AddTarget(AActor* target);
	//Try to trigger the next effect
	UFUNCTION(BlueprintCallable)
	void ResetTargets();
	//Finish the spell
	UFUNCTION(BlueprintCallable)
	void SpellEnd();
	//Returns the spell cost
	UFUNCTION(BlueprintCallable)
	float GetSpellCost() {return SpellCost;};
	//Returns the location currently associated with the spell
	UFUNCTION(BlueprintCallable)
	FVector GetSpellLocation() {return Location;};
	//Sets the location of the spell
	UFUNCTION(BlueprintCallable)
	void SetSpellLocation(FVector loc) {Location = loc;};
	
	//The caster of this spell
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Caster")
	AActor* Caster;
	//Array of the effects of the spell
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Effects")
	TArray<FAugmentedEffects> Effects;
	//Array of the effects instances of the spell
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Effects")
	TArray<UAMEffect*> EffectsInstance;
	//Targets of this spell
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Targets")
	TArray<AActor*> CurrentTargets;

	//Delegate for the end of the spell
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnSpellComplete OnSpellCompleteDelegate;
protected:

	//Keep track of the current effect we are at in the array
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	int CurrentEffectIndex;
	//Total cost of the spell
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	float SpellCost;
	//Current location of the spell
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;
	
private:
};
