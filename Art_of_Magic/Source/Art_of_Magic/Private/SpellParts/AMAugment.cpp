// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellParts\AMAugment.h"

#include "SpellParts\AMEffect.h"

void UAMAugment::ApplyAugment()
{
	if(OwningEffect != nullptr)
	{
		for(TPair<FGameplayTag, FAugmentAttributes> tag : Modifiers)
		{
			//Cheat to avoid errors
			if(tag.Value.AugmentType == EAugmentModificationType::Tag)
			{
				OwningEffect->AddTag(tag.Key);
				continue;
			}

			//Get the current value of the attribute we want to modify
			float attribute = OwningEffect->GetAttribute(tag.Key);

			//Modify the value according to the augment type
			switch (tag.Value.AugmentType)
			{
			case EAugmentModificationType::Additive:
				attribute += tag.Value.Modifier;
				break;
			case EAugmentModificationType::Multiplicative:
				attribute *= tag.Value.Modifier;
				break;
			case EAugmentModificationType::Override:
				attribute = tag.Value.Modifier;
				break;
			default: ;
			}
			//Apply the modification
			OwningEffect->ModifyStat(tag.Key, attribute);
		}
	}
}
