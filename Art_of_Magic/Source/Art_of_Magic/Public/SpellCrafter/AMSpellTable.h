// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/DASAbilityController.h"
#include "GameFramework/Actor.h"
#include "SpellParts/AMEffect.h"
#include "SpellParts/AMSpell.h"
#include "AMSpellTable.generated.h"
/*
 *Table where we can craft a new spell
 */
UCLASS()
class ART_OF_MAGIC_API AAMSpellTable : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAMSpellTable();

	//component of the key object
	UPROPERTY(VisibleAnywhere, Category=Mesh)
	UStaticMeshComponent* Mesh;
	//BP Implementation of the function to spawn the crafter widget
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void SpawnWidget();
	//Get the effects the table holds
	UFUNCTION(BlueprintCallable)
	TArray<UAMEffect*> GetEffects() {return InstanciatedEffects;};
	//Get the casting methods the table holds
	UFUNCTION(BlueprintCallable)
	TArray<UAMCastingMethod*> GetCastingMethod() {return InstanciatedCastingMethods;};
	//Get the augments the table holds
	UFUNCTION(BlueprintCallable)
	TArray<UAMAugment*> GetAugment(TArray<FGameplayTag> Filter);
	//instantiate the spell parts (effect,augment,cast) to get their final info
	UFUNCTION(BlueprintCallable)
	void InstantiateSpellParts();
	//Creates an instance of a spell
	UFUNCTION(BlueprintCallable)
	UAMSpell* CreateSpell(TArray<FAugmentedEffects> SelectedEffects);
	//Applies the spell to the current player's ability controller
	UFUNCTION(BlueprintCallable)
	void ApplySpell(FGameplayTag Slot, UAMSpell* spellInstance);
	//Sets a reference to the player's ability controller
	UFUNCTION(BlueprintCallable)
	void SetAbilityController(UDASAbilityController* controller) {UserController = controller;};
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	//C++ Implementation of the widget spawn
	UFUNCTION()
	void SpawnWidget_CPP();

	//Ability Controller of the current table user
	UPROPERTY(BlueprintReadOnly)
	UDASAbilityController* UserController;
	//List of available effects BP
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UAMEffect>> AvailableEffects;
	//List of available casting methods BP
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UAMCastingMethod>> AvailableCastingMethod;
	//List of available augment BP
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<TSubclassOf<UAMAugment>> AvailableAugments;

	//Instances of augments so we have access to their var
	UPROPERTY()
	TArray<UAMAugment*> InstanciatedAugments;
	//Instances of effects so we have access to their var
	UPROPERTY()
	TArray<UAMEffect*> InstanciatedEffects;
	//Instances of augments so we have access to their var
	UPROPERTY()
	TArray<UAMCastingMethod*> InstanciatedCastingMethods;
	//Widget to display
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UUserWidget> SpellDisplay;
	//Spell template BP used to instantiate a spell (used to get final spell infos)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSubclassOf<UAMSpell> SpellTemplate;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
