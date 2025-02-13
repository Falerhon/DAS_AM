// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMAugmentable.h"
#include "AMComponentDescription.h"
#include "DASReplicatedObject.h"
#include "AMEffect.generated.h"

class UAMSpell;
/**
 * Effects are the main parts of a spell.
 * Effects are what the spell "do".
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnEffectComplete, TArray<AActor*>, Targets, bool, KeepTargets);
UCLASS(BlueprintType, Blueprintable, Abstract)
class ART_OF_MAGIC_API UAMEffect : public UDASReplicatedObject, public IAMAugmentable, public IAMComponentDescription
{
	GENERATED_BODY()

public:

	UAMEffect();

	//Tags that will stop the effect from triggering
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer BlockedBy;
	//Tags that are required for the effect to trigger
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer RequiredTags;
	//Tags to apply to the enemy
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TagsToApply;
	//Delegate called once the effect is complete
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
	FOnEffectComplete OnEffectComplete;
	//Icon for the display of the effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;
	//Bool to know if we transfer our targets to the next effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool ShouldKeepTarget = true;
	
	//Returns info of this component
	UFUNCTION(BlueprintCallable)
	virtual FString GetName() override {return Name;}
	UFUNCTION(BlueprintCallable)
	virtual FString GetDescription() override {return Description;}
	//Replace a stat linked to the Tag with the NewStat
	UFUNCTION()
	void ModifyStat(FGameplayTag Tag, float NewStat);
	//Initiates the component (instantiate it's augments)
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Initiate();
	//Prepare the spell before the start of the cast
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void PreCastPrepare();
	//Trigger this effect
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void TriggerEffect();
	//Called when the effect is over
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void EffectEnd();
	//Adds targets to this effect
	UFUNCTION(BlueprintCallable)
	void AddTargets(TArray<AActor*> targets);
	//Removes targets from this effect
	UFUNCTION(BlueprintCallable)
	void RemoveTargets(TArray<AActor*> targets);
	//Get the owning spell
	UFUNCTION(BlueprintCallable)
	UAMSpell* GetParentSpell() {return ParentSpell;}
	//Sets the owning spell
	UFUNCTION(BlueprintCallable)
	void SetParentSpell(UAMSpell* spell) { ParentSpell = spell;}
	//Returns this effect's cost
	UFUNCTION(BlueprintCallable)
	float GetCost() {return EffectCost;};
	//Returns the tags of this effect's compatible augments
	UFUNCTION(BlueprintCallable)
	TArray<FGameplayTag> GetCompatibleAugments() {return CompatibleAugments;};

	//Add a tag to this effect (Not for the compatible augments)
	UFUNCTION(BlueprintCallable)
	void AddTag(FGameplayTag Tag);
	//Casts a sphere to detect all actors in the spell's range
	UFUNCTION(BlueprintCallable)
	TArray<AActor*> GetActorsInRange();

	//Add an array of augments to the effect
	UFUNCTION(BlueprintCallable)
	void AddAugments(TArray<TSubclassOf<UAMAugment>> augments) {Augments.Append(augments);};
	//Add a single augment to the effect
	UFUNCTION(BlueprintCallable)
	void AddAugment(TSubclassOf<UAMAugment> augment) {Augments.Add(augment);}
	//Set if the spell should keep it's targets
	UFUNCTION(BlueprintCallable)
	void SetShouldKeepTargets(bool shouldKeep) {ShouldKeepTarget = shouldKeep;}

protected:
	//Description of this component
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Description")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Description")
	FString Description;
	//Spell owning this effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Parent Spell")
	UAMSpell* ParentSpell;
	//When applicable, location at which the effect needs to trigger
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FVector Location;
	//List of augments for this effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Augments of the effect")
	TArray<TSubclassOf<UAMAugment>> Augments;
	//List of compatibility for the augments (only augments with these tags will be applied)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Compatibility")
	TArray<FGameplayTag> CompatibleAugments;
	//Targets affected by this effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Target")
	TArray<AActor*> Targets;
	//Base mana cost of this effect
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float EffectCost;
	//Effect base stats. How they are used will be determined in the BP
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FGameplayTag, float> Stats;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FGameplayTagContainer TagContainer;
	
#pragma region CPP implementation

	UFUNCTION()
	void Initiate_CPP();
	
	UFUNCTION()
	virtual void TriggerEffect_CPP();
	
	UFUNCTION()
	virtual void EffectEnd_CPP();

	UFUNCTION()
	static void PreCastPrepare_CPP();

public:
	virtual float GetAttribute(FGameplayTag tag) override;

protected:
#pragma endregion
};
