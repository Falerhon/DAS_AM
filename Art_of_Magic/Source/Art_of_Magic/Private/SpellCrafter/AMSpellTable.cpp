// Fill out your copyright notice in the Description page of Project Settings.


#include "SpellCrafter/AMSpellTable.h"

#include "Controller/AMAbilityController.h"
#include "SpellParts/AMCastingMethod.h"
#include "SpellParts/AMSpellAbility.h"

// Sets default values
AAMSpellTable::AAMSpellTable()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>("Mesh");
	Mesh->SetupAttachment(RootComponent);
	
	InstantiateSpellParts();
}

void AAMSpellTable::SpawnWidget_Implementation()
{
	SpawnWidget_CPP();
}

TArray<UAMAugment*> AAMSpellTable::GetAugment(TArray<FGameplayTag> Filter)
{
	TArray<UAMAugment*> augments;
	//Only returns the applicable augments
	for(UAMAugment* aug : InstanciatedAugments)
	{
		if(Filter.Contains(aug->GetAugmentTag()))
		{
			augments.Add(aug);
		}
	}
	
	return augments;
}

void AAMSpellTable::InstantiateSpellParts()
{
	//Effects
	for(TSubclassOf<UAMEffect> eff : AvailableEffects)
	{
		UAMEffect* e = NewObject<UAMEffect>(this, eff);
		e->SetParentSpell(nullptr);
		InstanciatedEffects.AddUnique(e);
	}
	//Augments
	for(TSubclassOf<UAMAugment> aug : AvailableAugments)
	{
		UAMAugment* a = NewObject<UAMAugment>(this, aug);
		InstanciatedAugments.AddUnique(a);
	}
	//Casting methods
	for(TSubclassOf<UAMCastingMethod> aug : AvailableCastingMethod)
	{
		UAMCastingMethod* a = NewObject<UAMCastingMethod>(this, aug);
		InstanciatedCastingMethods.AddUnique(a);
	}
}

UAMSpell* AAMSpellTable::CreateSpell(TArray<FAugmentedEffects> SelectedEffects)
{
	//We use a spell template since UAMSpell is abstract
	UAMSpell* spellInstance = NewObject<UAMSpell>(UserController->GetOuter(), SpellTemplate);
	spellInstance->AddEffects(SelectedEffects);
	spellInstance->Initialize();
	return spellInstance;
}

void AAMSpellTable::ApplySpell(FGameplayTag Slot, UAMSpell* spellInstance)
{
	if(auto c = Cast<UAMAbilityController>(UserController))
	{
		UAMSpellAbility* ability = c->GetSpellInstance(Slot);
		spellInstance->Rename(nullptr, ability);
		c->SetSpellInstance(Slot, spellInstance);
	}
}

// Called when the game starts or when spawned
void AAMSpellTable::BeginPlay()
{
	Super::BeginPlay();
	
}

void AAMSpellTable::SpawnWidget_CPP()
{
	
}

// Called every frame
void AAMSpellTable::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

