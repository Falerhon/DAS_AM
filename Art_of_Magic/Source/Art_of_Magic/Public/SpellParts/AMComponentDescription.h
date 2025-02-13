// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMComponentDescription.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAMComponentDescription : public UInterface
{
	GENERATED_BODY()
};

/**
 * Interface to have access to a description for the spell component
 */
class ART_OF_MAGIC_API IAMComponentDescription
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	virtual FString GetName() = 0;
	virtual FString GetDescription() = 0;
};