// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AMEffect.h"
#include "AMCastingMethod.generated.h"

/**
 * Effect who are used as a way to start the spell.
 * Should not do anything too complex to not restrict
 * the start of a spell.
 */
UCLASS()
class ART_OF_MAGIC_API UAMCastingMethod : public UAMEffect
{
	GENERATED_BODY()
public:
	virtual void TriggerEffect_CPP() override;

	virtual void EffectEnd_CPP() override;
	
};
