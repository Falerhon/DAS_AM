// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellCrafter/AMCrafterWidget.h"


void UAMCrafterWidget::UpdateEffects_Implementation()
{
	UpdateEffects_CPP();
}

void UAMCrafterWidget::UpdateAugment_Implementation(UAMEffect* CurrentEffect)
{
	UpdateAugment_CPP(CurrentEffect);
}

void UAMCrafterWidget::UpdateCastingMethod_Implementation()
{
	UpdateCastingMethod_CPP();
}

void UAMCrafterWidget::ConfirmSpell(FGameplayTag SpellSlot)
{
	UAMSpell* spell = LinkedTable->CreateSpell(SelectedEffect);
	LinkedTable->ApplySpell(SpellSlot, spell);
}

void UAMCrafterWidget::UpdateEffects_CPP()
{
	AvailableEffect = LinkedTable->GetEffects();
	OnDataUpdateDelegate.Broadcast();
}

void UAMCrafterWidget::UpdateCastingMethod_CPP()
{
	AvailableCastingMethod = LinkedTable->GetCastingMethod();
	OnDataUpdateDelegate.Broadcast();
}

void UAMCrafterWidget::UpdateAugment_CPP(UAMEffect* CurrentEffect)
{
	AvailableAugments = LinkedTable->GetAugment(CurrentEffect->GetCompatibleAugments());
	OnDataUpdateDelegate.Broadcast();
}
