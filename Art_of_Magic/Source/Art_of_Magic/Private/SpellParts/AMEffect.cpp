// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellParts/AMEffect.h"

#include "Kismet/KismetSystemLibrary.h"

UAMEffect::UAMEffect(): ParentSpell(nullptr), EffectCost(0)
{
	Stats.Add(FGameplayTag::RequestGameplayTag("Gameplay.Ability.Stats.Strength"), 10);
	Stats.Add(FGameplayTag::RequestGameplayTag("Gameplay.Ability.Stats.Range"), 0);
	Stats.Add(FGameplayTag::RequestGameplayTag("Gameplay.Ability.Stats.Time"), 0);
}

void UAMEffect::ModifyStat(FGameplayTag Tag, float NewStat)
{
	Stats.Emplace(Tag, NewStat);
}

void UAMEffect::PreCastPrepare_Implementation()
{
	PreCastPrepare_CPP();
}

void UAMEffect::Initiate_Implementation()
{
	Initiate_CPP();
}

void UAMEffect::TriggerEffect_Implementation()
{
	TriggerEffect_CPP();
}

void UAMEffect::TriggerEffect_CPP()
{
}

void UAMEffect::EffectEnd_CPP()
{
	//Broadcast the ending of the effect
	OnEffectComplete.Broadcast(Targets, ShouldKeepTarget);

	//Reset the targets
	Targets.Empty();
}

void UAMEffect::PreCastPrepare_CPP()
{
}

float UAMEffect::GetAttribute(FGameplayTag tag)
{
	if(!Stats.Find(tag))
		return 0;
	return Stats[tag];
}

void UAMEffect::Initiate_CPP()
{
	for(auto aug : Augments)
	{
		const auto augmentInstance = NewObject<UAMAugment>(this, aug);
		
		if(CompatibleAugments.Find(augmentInstance->GetAugmentTag()) == INDEX_NONE)
		{
			UE_LOG(LogTemp, Warning, TEXT("Augment %s is not a part of the allowed augment"), *augmentInstance->GetName());
			continue;
		}
		
		augmentInstance->SetOwningEffect(this);
		augmentInstance->ApplyAugment();
		EffectCost *= augmentInstance->GetCostModifier();
	}
}

void UAMEffect::EffectEnd_Implementation()
{
	EffectEnd_CPP();
}

void UAMEffect::AddTargets(TArray<AActor*> targets)
{
	//Don't try to add targets if there are none to add
	if(targets.IsEmpty())
		return;
	
	//Make sure the same target isn't added twice
	for(AActor* t : targets)
	{
		Targets.AddUnique(t);
	}
}

void UAMEffect::RemoveTargets(TArray<AActor*> targets)
{
	for(AActor* t : targets)
	{
		if(!Targets.Find(t))
			continue;
		
		Targets.Remove(t);
	}
}

void UAMEffect::AddTag(FGameplayTag Tag)
{
	TagContainer.AddTag(Tag);
}

TArray<AActor*> UAMEffect::GetActorsInRange()
{
	const TArray<AActor*>& ActorsToIgnore = TArray<AActor*>();
	TArray<FHitResult> outHit;
	
	const bool hit = UKismetSystemLibrary::SphereTraceMulti(GetWorld(), Location, Location, Stats[FGameplayTag::RequestGameplayTag("Gameplay.Ability.Stats.Range")],
		UEngineTypes::ConvertToTraceType(ECC_Camera), false, ActorsToIgnore, EDrawDebugTrace::ForDuration, outHit, false);

	TArray<AActor*> Actors;
	
	if(hit)
	{
		for(FHitResult result : outHit)
		{
			if(AActor* a = Cast<AActor>(result.GetActor()))
			{
				Actors.AddUnique(a);
			}
		}
	}
	return Actors;
}
