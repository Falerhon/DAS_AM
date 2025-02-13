// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMComponentDescription.h"
#include "GameplayTagContainer.h"
#include "Attributes/DASAttribute.h"
#include "UObject/NoExportTypes.h"
#include "AMAugment.generated.h"

class UAMEffect;
//Type of the augment
UENUM(BlueprintType)
enum class EAugmentModificationType : uint8
{
	Additive,
	Multiplicative,
	Override,
	Tag
};
//Allows multiple types of modifiers
USTRUCT(BlueprintType)
struct FAugmentAttributes
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Modifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAugmentModificationType AugmentType;
};

/**
 * Augments to raise the power of effects at the cost of mana efficiency
 */
UCLASS(Blueprintable)
class ART_OF_MAGIC_API UAMAugment : public UObject, public IAMComponentDescription
{
	GENERATED_BODY()

public:

	//Icon for the display of the augment
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Icon;
	//Applies the augment to the linked effect
	UFUNCTION(BlueprintCallable, Category="Augment")
	void ApplyAugment();
	//Returns the tag associated to this augment
	UFUNCTION(BlueprintCallable, Category="Getter")
	FGameplayTag GetAugmentTag() {return AugmentTag;}
	//Returns the cost modifier of this effect
	UFUNCTION(BlueprintCallable, Category="Getter")
	float GetCostModifier() {return CostModifier;}
	//Sets the effect that owns this augment
	UFUNCTION(BlueprintCallable, Category="Setter")
	void SetOwningEffect(UAMEffect* Effect) {OwningEffect = Effect;}

	//From AMComponentDescription interface. Returns the info for this component
	UFUNCTION(BlueprintCallable)
	virtual FString GetName() override {return Name;}
	UFUNCTION(BlueprintCallable)
	virtual FString GetDescription() override {return Description;}

	
protected:
	//Description of this component 
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Description")
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Description")
	FString Description;

	//Tag associated to this augment. Used to identify it and check if 
	//it is compatible with effects
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Identifier")
	FGameplayTag AugmentTag;
	//The stats and their modifier
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	TMap<FGameplayTag, FAugmentAttributes> Modifiers;
	//How much this augment impact the Effect cost
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
	float CostModifier;
	//Effect that owns this
	UPROPERTY()
	UAMEffect* OwningEffect;
	
	
};
