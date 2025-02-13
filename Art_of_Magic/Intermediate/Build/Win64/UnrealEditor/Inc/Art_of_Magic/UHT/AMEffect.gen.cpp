// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMEffect.h"
#include "GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMEffect() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugment_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugmentable_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMComponentDescription_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpell_NoRegister();
	ART_OF_MAGIC_API UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	DREAMABILITYSYSTEM_API UClass* Z_Construct_UClass_UDASReplicatedObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics
	{
		struct _Script_Art_of_Magic_eventOnEffectComplete_Parms
		{
			TArray<AActor*> Targets;
			bool KeepTargets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static void NewProp_KeepTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Art_of_Magic_eventOnEffectComplete_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_KeepTargets_SetBit(void* Obj)
	{
		((_Script_Art_of_Magic_eventOnEffectComplete_Parms*)Obj)->KeepTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_KeepTargets = { "KeepTargets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_Art_of_Magic_eventOnEffectComplete_Parms), &Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_KeepTargets_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::NewProp_KeepTargets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Effects are the main parts of a spell.\n * Effects are what the spell \"do\".\n */" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effects are the main parts of a spell.\nEffects are what the spell \"do\"." },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Art_of_Magic, nullptr, "OnEffectComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::_Script_Art_of_Magic_eventOnEffectComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::_Script_Art_of_Magic_eventOnEffectComplete_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnEffectComplete_DelegateWrapper(const FMulticastScriptDelegate& OnEffectComplete, const TArray<AActor*>& Targets, bool KeepTargets)
{
	struct _Script_Art_of_Magic_eventOnEffectComplete_Parms
	{
		TArray<AActor*> Targets;
		bool KeepTargets;
	};
	_Script_Art_of_Magic_eventOnEffectComplete_Parms Parms;
	Parms.Targets=Targets;
	Parms.KeepTargets=KeepTargets ? true : false;
	OnEffectComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UAMEffect::execPreCastPrepare_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAMEffect::PreCastPrepare_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execEffectEnd_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EffectEnd_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execTriggerEffect_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEffect_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execInitiate_CPP)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initiate_CPP();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execSetShouldKeepTargets)
	{
		P_GET_UBOOL(Z_Param_shouldKeep);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldKeepTargets(Z_Param_shouldKeep);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execAddAugment)
	{
		P_GET_OBJECT(UClass,Z_Param_augment);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAugment(Z_Param_augment);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execAddAugments)
	{
		P_GET_TARRAY(TSubclassOf<UAMAugment> ,Z_Param_augments);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAugments(Z_Param_augments);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execGetActorsInRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActorsInRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execAddTag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTag(Z_Param_Tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execGetCompatibleAugments)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FGameplayTag>*)Z_Param__Result=P_THIS->GetCompatibleAugments();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execGetCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execSetParentSpell)
	{
		P_GET_OBJECT(UAMSpell,Z_Param_spell);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParentSpell(Z_Param_spell);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execGetParentSpell)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAMSpell**)Z_Param__Result=P_THIS->GetParentSpell();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execRemoveTargets)
	{
		P_GET_TARRAY(AActor*,Z_Param_targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveTargets(Z_Param_targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execAddTargets)
	{
		P_GET_TARRAY(AActor*,Z_Param_targets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTargets(Z_Param_targets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execEffectEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EffectEnd_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execTriggerEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execPreCastPrepare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreCastPrepare_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execInitiate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initiate_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execModifyStat)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewStat);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ModifyStat(Z_Param_Tag,Z_Param_NewStat);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execGetDescription)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDescription();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMEffect::execGetName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetName();
		P_NATIVE_END;
	}
	static FName NAME_UAMEffect_EffectEnd = FName(TEXT("EffectEnd"));
	void UAMEffect::EffectEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMEffect_EffectEnd),NULL);
	}
	static FName NAME_UAMEffect_Initiate = FName(TEXT("Initiate"));
	void UAMEffect::Initiate()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMEffect_Initiate),NULL);
	}
	static FName NAME_UAMEffect_PreCastPrepare = FName(TEXT("PreCastPrepare"));
	void UAMEffect::PreCastPrepare()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMEffect_PreCastPrepare),NULL);
	}
	static FName NAME_UAMEffect_TriggerEffect = FName(TEXT("TriggerEffect"));
	void UAMEffect::TriggerEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAMEffect_TriggerEffect),NULL);
	}
	void UAMEffect::StaticRegisterNativesUAMEffect()
	{
		UClass* Class = UAMEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAugment", &UAMEffect::execAddAugment },
			{ "AddAugments", &UAMEffect::execAddAugments },
			{ "AddTag", &UAMEffect::execAddTag },
			{ "AddTargets", &UAMEffect::execAddTargets },
			{ "EffectEnd", &UAMEffect::execEffectEnd },
			{ "EffectEnd_CPP", &UAMEffect::execEffectEnd_CPP },
			{ "GetActorsInRange", &UAMEffect::execGetActorsInRange },
			{ "GetCompatibleAugments", &UAMEffect::execGetCompatibleAugments },
			{ "GetCost", &UAMEffect::execGetCost },
			{ "GetDescription", &UAMEffect::execGetDescription },
			{ "GetName", &UAMEffect::execGetName },
			{ "GetParentSpell", &UAMEffect::execGetParentSpell },
			{ "Initiate", &UAMEffect::execInitiate },
			{ "Initiate_CPP", &UAMEffect::execInitiate_CPP },
			{ "ModifyStat", &UAMEffect::execModifyStat },
			{ "PreCastPrepare", &UAMEffect::execPreCastPrepare },
			{ "PreCastPrepare_CPP", &UAMEffect::execPreCastPrepare_CPP },
			{ "RemoveTargets", &UAMEffect::execRemoveTargets },
			{ "SetParentSpell", &UAMEffect::execSetParentSpell },
			{ "SetShouldKeepTargets", &UAMEffect::execSetShouldKeepTargets },
			{ "TriggerEffect", &UAMEffect::execTriggerEffect },
			{ "TriggerEffect_CPP", &UAMEffect::execTriggerEffect_CPP },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMEffect_AddAugment_Statics
	{
		struct AMEffect_eventAddAugment_Parms
		{
			TSubclassOf<UAMAugment>  augment;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_augment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAMEffect_AddAugment_Statics::NewProp_augment = { "augment", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventAddAugment_Parms, augment), Z_Construct_UClass_UClass, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_AddAugment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_AddAugment_Statics::NewProp_augment,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_AddAugment_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add a single augment to the effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a single augment to the effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_AddAugment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "AddAugment", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_AddAugment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddAugment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_AddAugment_Statics::AMEffect_eventAddAugment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddAugment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_AddAugment_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddAugment_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_AddAugment_Statics::AMEffect_eventAddAugment_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_AddAugment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_AddAugment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_AddAugments_Statics
	{
		struct AMEffect_eventAddAugments_Parms
		{
			TArray<TSubclassOf<UAMAugment> > augments;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_augments_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_augments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAMEffect_AddAugments_Statics::NewProp_augments_Inner = { "augments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMEffect_AddAugments_Statics::NewProp_augments = { "augments", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventAddAugments_Parms, augments), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_AddAugments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_AddAugments_Statics::NewProp_augments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_AddAugments_Statics::NewProp_augments,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_AddAugments_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add an array of augments to the effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add an array of augments to the effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_AddAugments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "AddAugments", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_AddAugments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddAugments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_AddAugments_Statics::AMEffect_eventAddAugments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddAugments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_AddAugments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddAugments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_AddAugments_Statics::AMEffect_eventAddAugments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_AddAugments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_AddAugments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_AddTag_Statics
	{
		struct AMEffect_eventAddTag_Parms
		{
			FGameplayTag Tag;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMEffect_AddTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventAddTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_AddTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_AddTag_Statics::NewProp_Tag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_AddTag_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add a tag to this effect (Not for the compatible augments)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add a tag to this effect (Not for the compatible augments)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_AddTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "AddTag", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_AddTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_AddTag_Statics::AMEffect_eventAddTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_AddTag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddTag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_AddTag_Statics::AMEffect_eventAddTag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_AddTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_AddTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_AddTargets_Statics
	{
		struct AMEffect_eventAddTargets_Parms
		{
			TArray<AActor*> targets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMEffect_AddTargets_Statics::NewProp_targets_Inner = { "targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMEffect_AddTargets_Statics::NewProp_targets = { "targets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventAddTargets_Parms, targets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_AddTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_AddTargets_Statics::NewProp_targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_AddTargets_Statics::NewProp_targets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_AddTargets_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Adds targets to this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds targets to this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_AddTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "AddTargets", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_AddTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_AddTargets_Statics::AMEffect_eventAddTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_AddTargets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_AddTargets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_AddTargets_Statics::AMEffect_eventAddTargets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_AddTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_AddTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_EffectEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_EffectEnd_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called when the effect is over\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the effect is over" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_EffectEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "EffectEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_EffectEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_EffectEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_EffectEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_EffectEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_EffectEnd_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_EffectEnd_CPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_EffectEnd_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "EffectEnd_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_EffectEnd_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_EffectEnd_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_EffectEnd_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_EffectEnd_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics
	{
		struct AMEffect_eventGetActorsInRange_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventGetActorsInRange_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Casts a sphere to detect all actors in the spell's range\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Casts a sphere to detect all actors in the spell's range" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "GetActorsInRange", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::AMEffect_eventGetActorsInRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::AMEffect_eventGetActorsInRange_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_GetActorsInRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_GetActorsInRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics
	{
		struct AMEffect_eventGetCompatibleAugments_Parms
		{
			TArray<FGameplayTag> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventGetCompatibleAugments_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the tags of this effect's compatible augments\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the tags of this effect's compatible augments" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "GetCompatibleAugments", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::AMEffect_eventGetCompatibleAugments_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::AMEffect_eventGetCompatibleAugments_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_GetCompatibleAugments()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_GetCompatibleAugments_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_GetCost_Statics
	{
		struct AMEffect_eventGetCost_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAMEffect_GetCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventGetCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_GetCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_GetCost_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns this effect's cost\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns this effect's cost" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_GetCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "GetCost", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_GetCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_GetCost_Statics::AMEffect_eventGetCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_GetCost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetCost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_GetCost_Statics::AMEffect_eventGetCost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_GetCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_GetCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_GetDescription_Statics
	{
		struct AMEffect_eventGetDescription_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAMEffect_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_GetDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_GetDescription_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_GetDescription_Statics::AMEffect_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_GetDescription_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetDescription_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_GetDescription_Statics::AMEffect_eventGetDescription_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_GetDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_GetDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_GetName_Statics
	{
		struct AMEffect_eventGetName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAMEffect_GetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventGetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_GetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_GetName_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns info of this component\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns info of this component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_GetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "GetName", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_GetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_GetName_Statics::AMEffect_eventGetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_GetName_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetName_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_GetName_Statics::AMEffect_eventGetName_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_GetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_GetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics
	{
		struct AMEffect_eventGetParentSpell_Parms
		{
			UAMSpell* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventGetParentSpell_Parms, ReturnValue), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Get the owning spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Get the owning spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "GetParentSpell", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::AMEffect_eventGetParentSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::AMEffect_eventGetParentSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_GetParentSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_GetParentSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_Initiate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_Initiate_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Initiates the component (instantiate it's augments)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initiates the component (instantiate it's augments)" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_Initiate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "Initiate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_Initiate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_Initiate_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_Initiate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_Initiate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_Initiate_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_Initiate_CPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_Initiate_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "Initiate_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_Initiate_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_Initiate_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_Initiate_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_Initiate_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_ModifyStat_Statics
	{
		struct AMEffect_eventModifyStat_Parms
		{
			FGameplayTag Tag;
			float NewStat;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventModifyStat_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::NewProp_NewStat = { "NewStat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventModifyStat_Parms, NewStat), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::NewProp_Tag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::NewProp_NewStat,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Replace a stat linked to the Tag with the NewStat\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replace a stat linked to the Tag with the NewStat" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "ModifyStat", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::AMEffect_eventModifyStat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::AMEffect_eventModifyStat_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_ModifyStat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_ModifyStat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_PreCastPrepare_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_PreCastPrepare_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Prepare the spell before the start of the cast\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepare the spell before the start of the cast" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_PreCastPrepare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "PreCastPrepare", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_PreCastPrepare_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_PreCastPrepare_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_PreCastPrepare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_PreCastPrepare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "PreCastPrepare_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00082401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics
	{
		struct AMEffect_eventRemoveTargets_Parms
		{
			TArray<AActor*> targets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_targets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::NewProp_targets_Inner = { "targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::NewProp_targets = { "targets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventRemoveTargets_Parms, targets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::NewProp_targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::NewProp_targets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Removes targets from this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes targets from this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "RemoveTargets", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::AMEffect_eventRemoveTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::AMEffect_eventRemoveTargets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_RemoveTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_RemoveTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics
	{
		struct AMEffect_eventSetParentSpell_Parms
		{
			UAMSpell* spell;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spell;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::NewProp_spell = { "spell", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMEffect_eventSetParentSpell_Parms, spell), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::NewProp_spell,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the owning spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the owning spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "SetParentSpell", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::AMEffect_eventSetParentSpell_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::AMEffect_eventSetParentSpell_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_SetParentSpell()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_SetParentSpell_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics
	{
		struct AMEffect_eventSetShouldKeepTargets_Parms
		{
			bool shouldKeep;
		};
		static void NewProp_shouldKeep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldKeep;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::NewProp_shouldKeep_SetBit(void* Obj)
	{
		((AMEffect_eventSetShouldKeepTargets_Parms*)Obj)->shouldKeep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::NewProp_shouldKeep = { "shouldKeep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMEffect_eventSetShouldKeepTargets_Parms), &Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::NewProp_shouldKeep_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::NewProp_shouldKeep,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Set if the spell should keep it's targets\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set if the spell should keep it's targets" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "SetShouldKeepTargets", nullptr, nullptr, Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::AMEffect_eventSetShouldKeepTargets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::AMEffect_eventSetShouldKeepTargets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_TriggerEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_TriggerEffect_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Trigger this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_TriggerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "TriggerEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_TriggerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_TriggerEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_TriggerEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_TriggerEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMEffect, nullptr, "TriggerEffect_CPP", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMEffect);
	UClass* Z_Construct_UClass_UAMEffect_NoRegister()
	{
		return UAMEffect::StaticClass();
	}
	struct Z_Construct_UClass_UAMEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockedBy_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlockedBy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredTags_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredTags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagsToApply_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagsToApply;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnEffectComplete_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEffectComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Icon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShouldKeepTarget_MetaData[];
#endif
		static void NewProp_ShouldKeepTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldKeepTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSpell_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSpell;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Augments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Augments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Augments;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompatibleAugments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleAugments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompatibleAugments;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectCost;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Stats_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stats_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Stats_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Stats;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TagContainer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TagContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDASReplicatedObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMEffect_AddAugment, "AddAugment" }, // 3688416081
		{ &Z_Construct_UFunction_UAMEffect_AddAugments, "AddAugments" }, // 910894892
		{ &Z_Construct_UFunction_UAMEffect_AddTag, "AddTag" }, // 609434357
		{ &Z_Construct_UFunction_UAMEffect_AddTargets, "AddTargets" }, // 3434014068
		{ &Z_Construct_UFunction_UAMEffect_EffectEnd, "EffectEnd" }, // 3477126345
		{ &Z_Construct_UFunction_UAMEffect_EffectEnd_CPP, "EffectEnd_CPP" }, // 4027061906
		{ &Z_Construct_UFunction_UAMEffect_GetActorsInRange, "GetActorsInRange" }, // 913300688
		{ &Z_Construct_UFunction_UAMEffect_GetCompatibleAugments, "GetCompatibleAugments" }, // 1569008073
		{ &Z_Construct_UFunction_UAMEffect_GetCost, "GetCost" }, // 281340797
		{ &Z_Construct_UFunction_UAMEffect_GetDescription, "GetDescription" }, // 2152137569
		{ &Z_Construct_UFunction_UAMEffect_GetName, "GetName" }, // 2449305153
		{ &Z_Construct_UFunction_UAMEffect_GetParentSpell, "GetParentSpell" }, // 522037362
		{ &Z_Construct_UFunction_UAMEffect_Initiate, "Initiate" }, // 3467473424
		{ &Z_Construct_UFunction_UAMEffect_Initiate_CPP, "Initiate_CPP" }, // 1895606837
		{ &Z_Construct_UFunction_UAMEffect_ModifyStat, "ModifyStat" }, // 2242649687
		{ &Z_Construct_UFunction_UAMEffect_PreCastPrepare, "PreCastPrepare" }, // 377272491
		{ &Z_Construct_UFunction_UAMEffect_PreCastPrepare_CPP, "PreCastPrepare_CPP" }, // 467926631
		{ &Z_Construct_UFunction_UAMEffect_RemoveTargets, "RemoveTargets" }, // 1962617426
		{ &Z_Construct_UFunction_UAMEffect_SetParentSpell, "SetParentSpell" }, // 2926179010
		{ &Z_Construct_UFunction_UAMEffect_SetShouldKeepTargets, "SetShouldKeepTargets" }, // 2997884327
		{ &Z_Construct_UFunction_UAMEffect_TriggerEffect, "TriggerEffect" }, // 1734936230
		{ &Z_Construct_UFunction_UAMEffect_TriggerEffect_CPP, "TriggerEffect_CPP" }, // 2779601086
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SpellParts/AMEffect.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_BlockedBy_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tags that will stop the effect from triggering\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that will stop the effect from triggering" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_BlockedBy = { "BlockedBy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, BlockedBy), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_BlockedBy_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_BlockedBy_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_RequiredTags_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tags that are required for the effect to trigger\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags that are required for the effect to trigger" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_RequiredTags = { "RequiredTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, RequiredTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_RequiredTags_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_RequiredTags_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_TagsToApply_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Tags to apply to the enemy\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tags to apply to the enemy" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_TagsToApply = { "TagsToApply", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, TagsToApply), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_TagsToApply_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_TagsToApply_MetaData) }; // 405371792
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_OnEffectComplete_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegate called once the effect is complete\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate called once the effect is complete" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_OnEffectComplete = { "OnEffectComplete", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, OnEffectComplete), Z_Construct_UDelegateFunction_Art_of_Magic_OnEffectComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_OnEffectComplete_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_OnEffectComplete_MetaData) }; // 3061516170
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Icon_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Icon for the display of the effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Icon for the display of the effect" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Icon), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Icon_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Icon_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Bool to know if we transfer our targets to the next effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Bool to know if we transfer our targets to the next effect" },
#endif
	};
#endif
	void Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget_SetBit(void* Obj)
	{
		((UAMEffect*)Obj)->ShouldKeepTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget = { "ShouldKeepTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAMEffect), &Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Description" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Description of this component\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Description of this component" },
#endif
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Name_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Description" },
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Description), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Description_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Description_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_ParentSpell_MetaData[] = {
		{ "Category", "Parent Spell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Spell owning this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spell owning this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_ParentSpell = { "ParentSpell", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, ParentSpell), Z_Construct_UClass_UAMSpell_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_ParentSpell_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_ParentSpell_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//When applicable, location at which the effect needs to trigger\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "When applicable, location at which the effect needs to trigger" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Location_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments_Inner = { "Augments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments_MetaData[] = {
		{ "Category", "Augments of the effect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of augments for this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of augments for this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments = { "Augments", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Augments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments_Inner = { "CompatibleAugments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments_MetaData[] = {
		{ "Category", "Compatibility" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//List of compatibility for the augments (only augments with these tags will be applied)\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of compatibility for the augments (only augments with these tags will be applied)" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments = { "CompatibleAugments", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, CompatibleAugments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments_MetaData) }; // 2083603574
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Targets affected by this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targets affected by this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_EffectCost_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Base mana cost of this effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base mana cost of this effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_EffectCost = { "EffectCost", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, EffectCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_EffectCost_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_EffectCost_MetaData) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_ValueProp = { "Stats", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_Key_KeyProp = { "Stats_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_MetaData[] = {
		{ "Category", "AMEffect" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Effect base stats. How they are used will be determined in the BP\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect base stats. How they are used will be determined in the BP" },
#endif
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats = { "Stats", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, Stats), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_MetaData) }; // 2083603574
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMEffect_Statics::NewProp_TagContainer_MetaData[] = {
		{ "Category", "AMEffect" },
		{ "ModuleRelativePath", "Public/SpellParts/AMEffect.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMEffect_Statics::NewProp_TagContainer = { "TagContainer", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMEffect, TagContainer), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::NewProp_TagContainer_MetaData), Z_Construct_UClass_UAMEffect_Statics::NewProp_TagContainer_MetaData) }; // 405371792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAMEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_BlockedBy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_RequiredTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_TagsToApply,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_OnEffectComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Icon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_ShouldKeepTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_ParentSpell,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Augments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_CompatibleAugments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_EffectCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_Stats,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMEffect_Statics::NewProp_TagContainer,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAMEffect_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAMAugmentable_NoRegister, (int32)VTABLE_OFFSET(UAMEffect, IAMAugmentable), false },  // 3329271126
			{ Z_Construct_UClass_UAMComponentDescription_NoRegister, (int32)VTABLE_OFFSET(UAMEffect, IAMComponentDescription), false },  // 2678270913
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMEffect>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMEffect_Statics::ClassParams = {
		&UAMEffect::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAMEffect_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMEffect_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMEffect_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAMEffect()
	{
		if (!Z_Registration_Info_UClass_UAMEffect.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMEffect.OuterSingleton, Z_Construct_UClass_UAMEffect_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMEffect.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMEffect>()
	{
		return UAMEffect::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMEffect);
	UAMEffect::~UAMEffect() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMEffect, UAMEffect::StaticClass, TEXT("UAMEffect"), &Z_Registration_Info_UClass_UAMEffect, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMEffect), 3238420329U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_2372639819(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMEffect_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
