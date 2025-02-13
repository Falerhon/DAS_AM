// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMAugment.h"
#include "GameplayTagContainer.h"
#include "Attributes/DASAttribute.h"
#include "UObject/Interface.h"
#include "AMAugmentable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAMAugmentable : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface for objects who can be affected by augments
 */
class ART_OF_MAGIC_API IAMAugmentable
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual float GetAttribute(FGameplayTag tag) = 0;
};
