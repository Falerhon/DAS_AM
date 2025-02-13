// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Art_of_Magic/Public/SpellParts/AMSpell.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAMSpell() {}
// Cross Module References
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMAugment_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMEffect_NoRegister();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpell();
	ART_OF_MAGIC_API UClass* Z_Construct_UClass_UAMSpell_NoRegister();
	ART_OF_MAGIC_API UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature();
	ART_OF_MAGIC_API UScriptStruct* Z_Construct_UScriptStruct_FAugmentedEffects();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Art_of_Magic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AugmentedEffects;
class UScriptStruct* FAugmentedEffects::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AugmentedEffects.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AugmentedEffects.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAugmentedEffects, (UObject*)Z_Construct_UPackage__Script_Art_of_Magic(), TEXT("AugmentedEffects"));
	}
	return Z_Registration_Info_UScriptStruct_AugmentedEffects.OuterSingleton;
}
template<> ART_OF_MAGIC_API UScriptStruct* StaticStruct<FAugmentedEffects>()
{
	return FAugmentedEffects::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAugmentedEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FClassPropertyParams NewProp_Augments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Augments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Augments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeepTargets_MetaData[];
#endif
		static void NewProp_KeepTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_KeepTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentedEffects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAugmentedEffects>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Effect_MetaData[] = {
		{ "Category", "AugmentedEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Effect" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAugmentedEffects, Effect), Z_Construct_UClass_UClass, Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Effect_MetaData), Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Effect_MetaData) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments_Inner = { "Augments", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UAMAugment_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments_MetaData[] = {
		{ "Category", "AugmentedEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Augments associated\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Augments associated" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments = { "Augments", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAugmentedEffects, Augments), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments_MetaData), Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets_MetaData[] = {
		{ "Category", "AugmentedEffects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If the targets should be passed to the next node\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If the targets should be passed to the next node" },
#endif
	};
#endif
	void Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets_SetBit(void* Obj)
	{
		((FAugmentedEffects*)Obj)->KeepTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets = { "KeepTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FAugmentedEffects), &Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets_MetaData), Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAugmentedEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_Augments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewProp_KeepTargets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAugmentedEffects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
		nullptr,
		&NewStructOps,
		"AugmentedEffects",
		Z_Construct_UScriptStruct_FAugmentedEffects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentedEffects_Statics::PropPointers),
		sizeof(FAugmentedEffects),
		alignof(FAugmentedEffects),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentedEffects_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAugmentedEffects_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAugmentedEffects_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FAugmentedEffects()
	{
		if (!Z_Registration_Info_UScriptStruct_AugmentedEffects.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AugmentedEffects.InnerSingleton, Z_Construct_UScriptStruct_FAugmentedEffects_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AugmentedEffects.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Art_of_Magic, nullptr, "OnSpellComplete__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnSpellComplete_DelegateWrapper(const FMulticastScriptDelegate& OnSpellComplete)
{
	OnSpellComplete.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(UAMSpell::execSetSpellLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_loc);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpellLocation(Z_Param_loc);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execGetSpellLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSpellLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execGetSpellCost)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSpellCost();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execSpellEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpellEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execResetTargets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetTargets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execAddTarget)
	{
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddTarget(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execEffectOver)
	{
		P_GET_TARRAY(AActor*,Z_Param_Targets);
		P_GET_UBOOL(Z_Param_shouldKeepTargets);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EffectOver(Z_Param_Targets,Z_Param_shouldKeepTargets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execNextEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NextEffect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execTriggerEffect)
	{
		P_GET_OBJECT(UAMEffect,Z_Param_Effect);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TriggerEffect(Z_Param_Effect);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execCast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Cast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execPreCast)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreCast();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execInstantiateEffects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstantiateEffects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAMSpell::execAddEffects)
	{
		P_GET_TARRAY_REF(FAugmentedEffects,Z_Param_Out_effects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddEffects(Z_Param_Out_effects);
		P_NATIVE_END;
	}
	void UAMSpell::StaticRegisterNativesUAMSpell()
	{
		UClass* Class = UAMSpell::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddEffects", &UAMSpell::execAddEffects },
			{ "AddTarget", &UAMSpell::execAddTarget },
			{ "Cast", &UAMSpell::execCast },
			{ "EffectOver", &UAMSpell::execEffectOver },
			{ "GetSpellCost", &UAMSpell::execGetSpellCost },
			{ "GetSpellLocation", &UAMSpell::execGetSpellLocation },
			{ "Initialize", &UAMSpell::execInitialize },
			{ "InstantiateEffects", &UAMSpell::execInstantiateEffects },
			{ "NextEffect", &UAMSpell::execNextEffect },
			{ "PreCast", &UAMSpell::execPreCast },
			{ "ResetTargets", &UAMSpell::execResetTargets },
			{ "SetSpellLocation", &UAMSpell::execSetSpellLocation },
			{ "SpellEnd", &UAMSpell::execSpellEnd },
			{ "TriggerEffect", &UAMSpell::execTriggerEffect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAMSpell_AddEffects_Statics
	{
		struct AMSpell_eventAddEffects_Parms
		{
			TArray<FAugmentedEffects> effects;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_effects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects_Inner = { "effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAugmentedEffects, METADATA_PARAMS(0, nullptr) }; // 2299058747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects = { "effects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventAddEffects_Parms, effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects_MetaData), Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects_MetaData) }; // 2299058747
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_AddEffects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_AddEffects_Statics::NewProp_effects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_AddEffects_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Add effects to the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Add effects to the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_AddEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "AddEffects", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_AddEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddEffects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_AddEffects_Statics::AMSpell_eventAddEffects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_AddEffects_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddEffects_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_AddEffects_Statics::AMSpell_eventAddEffects_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_AddEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_AddEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_AddTarget_Statics
	{
		struct AMSpell_eventAddTarget_Parms
		{
			AActor* target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMSpell_AddTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventAddTarget_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_AddTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_AddTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_AddTarget_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try to trigger the next effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to trigger the next effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_AddTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "AddTarget", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_AddTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_AddTarget_Statics::AMSpell_eventAddTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_AddTarget_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_AddTarget_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_AddTarget_Statics::AMSpell_eventAddTarget_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_AddTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_AddTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_Cast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_Cast_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Trigger the casting method\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger the casting method" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_Cast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "Cast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_Cast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_Cast_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_Cast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_Cast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_EffectOver_Statics
	{
		struct AMSpell_eventEffectOver_Parms
		{
			TArray<AActor*> Targets;
			bool shouldKeepTargets;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Targets_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static void NewProp_shouldKeepTargets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_shouldKeepTargets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventEffectOver_Parms, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_shouldKeepTargets_SetBit(void* Obj)
	{
		((AMSpell_eventEffectOver_Parms*)Obj)->shouldKeepTargets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_shouldKeepTargets = { "shouldKeepTargets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AMSpell_eventEffectOver_Parms), &Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_shouldKeepTargets_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_EffectOver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_EffectOver_Statics::NewProp_shouldKeepTargets,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_EffectOver_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try to trigger the next effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to trigger the next effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_EffectOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "EffectOver", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_EffectOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_EffectOver_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_EffectOver_Statics::AMSpell_eventEffectOver_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_EffectOver_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_EffectOver_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_EffectOver_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_EffectOver_Statics::AMSpell_eventEffectOver_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_EffectOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_EffectOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics
	{
		struct AMSpell_eventGetSpellCost_Parms
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
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventGetSpellCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the spell cost\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the spell cost" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "GetSpellCost", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::AMSpell_eventGetSpellCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::AMSpell_eventGetSpellCost_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_GetSpellCost()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_GetSpellCost_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics
	{
		struct AMSpell_eventGetSpellLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventGetSpellLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Returns the location currently associated with the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the location currently associated with the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "GetSpellLocation", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::AMSpell_eventGetSpellLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::AMSpell_eventGetSpellLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_GetSpellLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_GetSpellLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_Initialize_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Instantiate the spell's component\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiate the spell's component" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_Initialize_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_InstantiateEffects_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_InstantiateEffects_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Instantiate the effects\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Instantiate the effects" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_InstantiateEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "InstantiateEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_InstantiateEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_InstantiateEffects_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_InstantiateEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_InstantiateEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_NextEffect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_NextEffect_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try to trigger the next effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to trigger the next effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_NextEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "NextEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_NextEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_NextEffect_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_NextEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_NextEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_PreCast_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_PreCast_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Called before the start of the first effect of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called before the start of the first effect of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_PreCast_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "PreCast", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_PreCast_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_PreCast_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_PreCast()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_PreCast_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_ResetTargets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_ResetTargets_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Try to trigger the next effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Try to trigger the next effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_ResetTargets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "ResetTargets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_ResetTargets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_ResetTargets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_ResetTargets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_ResetTargets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics
	{
		struct AMSpell_eventSetSpellLocation_Parms
		{
			FVector loc;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_loc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventSetSpellLocation_Parms, loc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::NewProp_loc,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Sets the location of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the location of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "SetSpellLocation", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::AMSpell_eventSetSpellLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::AMSpell_eventSetSpellLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_SetSpellLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_SetSpellLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_SpellEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_SpellEnd_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Finish the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finish the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_SpellEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "SpellEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_SpellEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_SpellEnd_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UAMSpell_SpellEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_SpellEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics
	{
		struct AMSpell_eventTriggerEffect_Parms
		{
			UAMEffect* Effect;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMSpell_eventTriggerEffect_Parms, Effect), Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::NewProp_Effect,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Start triggering the spell's effect\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Start triggering the spell's effect" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAMSpell, nullptr, "TriggerEffect", nullptr, nullptr, Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::AMSpell_eventTriggerEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::AMSpell_eventTriggerEffect_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UAMSpell_TriggerEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAMSpell_TriggerEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAMSpell);
	UClass* Z_Construct_UClass_UAMSpell_NoRegister()
	{
		return UAMSpell::StaticClass();
	}
	struct Z_Construct_UClass_UAMSpell_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Caster_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Caster;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Effects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Effects;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectsInstance_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectsInstance_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EffectsInstance;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentTargets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnSpellCompleteDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSpellCompleteDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentEffectIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentEffectIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpellCost_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpellCost;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAMSpell_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Art_of_Magic,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UAMSpell_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAMSpell_AddEffects, "AddEffects" }, // 2444535358
		{ &Z_Construct_UFunction_UAMSpell_AddTarget, "AddTarget" }, // 3596120989
		{ &Z_Construct_UFunction_UAMSpell_Cast, "Cast" }, // 1009933746
		{ &Z_Construct_UFunction_UAMSpell_EffectOver, "EffectOver" }, // 54586116
		{ &Z_Construct_UFunction_UAMSpell_GetSpellCost, "GetSpellCost" }, // 1159939413
		{ &Z_Construct_UFunction_UAMSpell_GetSpellLocation, "GetSpellLocation" }, // 3463698850
		{ &Z_Construct_UFunction_UAMSpell_Initialize, "Initialize" }, // 3770583733
		{ &Z_Construct_UFunction_UAMSpell_InstantiateEffects, "InstantiateEffects" }, // 2974148231
		{ &Z_Construct_UFunction_UAMSpell_NextEffect, "NextEffect" }, // 1326108674
		{ &Z_Construct_UFunction_UAMSpell_PreCast, "PreCast" }, // 221880862
		{ &Z_Construct_UFunction_UAMSpell_ResetTargets, "ResetTargets" }, // 2930310113
		{ &Z_Construct_UFunction_UAMSpell_SetSpellLocation, "SetSpellLocation" }, // 118828880
		{ &Z_Construct_UFunction_UAMSpell_SpellEnd, "SpellEnd" }, // 1821339631
		{ &Z_Construct_UFunction_UAMSpell_TriggerEffect, "TriggerEffect" }, // 2728288640
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Container for the effects.\n * Handles the triggering sequence of the effects\n */" },
#endif
		{ "IncludePath", "SpellParts/AMSpell.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container for the effects.\nHandles the triggering sequence of the effects" },
#endif
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_Caster_MetaData[] = {
		{ "Category", "Caster" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The caster of this spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The caster of this spell" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_Caster = { "Caster", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, Caster), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_Caster_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_Caster_MetaData) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects_Inner = { "Effects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAugmentedEffects, METADATA_PARAMS(0, nullptr) }; // 2299058747
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array of the effects of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of the effects of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects = { "Effects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, Effects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects_MetaData) }; // 2299058747
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance_Inner = { "EffectsInstance", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAMEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance_MetaData[] = {
		{ "Category", "Effects" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Array of the effects instances of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of the effects instances of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance = { "EffectsInstance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, EffectsInstance), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance_MetaData) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets_Inner = { "CurrentTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets_MetaData[] = {
		{ "Category", "Targets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Targets of this spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Targets of this spell" },
#endif
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets = { "CurrentTargets", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, CurrentTargets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_OnSpellCompleteDelegate_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Delegate for the end of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate for the end of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_OnSpellCompleteDelegate = { "OnSpellCompleteDelegate", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, OnSpellCompleteDelegate), Z_Construct_UDelegateFunction_Art_of_Magic_OnSpellComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_OnSpellCompleteDelegate_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_OnSpellCompleteDelegate_MetaData) }; // 1581973541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentEffectIndex_MetaData[] = {
		{ "Category", "AMSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Keep track of the current effect we are at in the array\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keep track of the current effect we are at in the array" },
#endif
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentEffectIndex = { "CurrentEffectIndex", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, CurrentEffectIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentEffectIndex_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentEffectIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_SpellCost_MetaData[] = {
		{ "Category", "AMSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Total cost of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Total cost of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_SpellCost = { "SpellCost", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, SpellCost), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_SpellCost_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_SpellCost_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAMSpell_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "AMSpell" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Current location of the spell\n" },
#endif
		{ "ModuleRelativePath", "Public/SpellParts/AMSpell.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current location of the spell" },
#endif
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAMSpell_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAMSpell, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::NewProp_Location_MetaData), Z_Construct_UClass_UAMSpell_Statics::NewProp_Location_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAMSpell_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_Caster,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_Effects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_EffectsInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_OnSpellCompleteDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_CurrentEffectIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_SpellCost,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAMSpell_Statics::NewProp_Location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAMSpell_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAMSpell>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAMSpell_Statics::ClassParams = {
		&UAMSpell::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAMSpell_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::PropPointers),
		0,
		0x009000A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::Class_MetaDataParams), Z_Construct_UClass_UAMSpell_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAMSpell_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UAMSpell()
	{
		if (!Z_Registration_Info_UClass_UAMSpell.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAMSpell.OuterSingleton, Z_Construct_UClass_UAMSpell_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAMSpell.OuterSingleton;
	}
	template<> ART_OF_MAGIC_API UClass* StaticClass<UAMSpell>()
	{
		return UAMSpell::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAMSpell);
	UAMSpell::~UAMSpell() {}
	struct Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics::ScriptStructInfo[] = {
		{ FAugmentedEffects::StaticStruct, Z_Construct_UScriptStruct_FAugmentedEffects_Statics::NewStructOps, TEXT("AugmentedEffects"), &Z_Registration_Info_UScriptStruct_AugmentedEffects, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAugmentedEffects), 2299058747U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAMSpell, UAMSpell::StaticClass, TEXT("UAMSpell"), &Z_Registration_Info_UClass_UAMSpell, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAMSpell), 1732419919U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_3124709339(TEXT("/Script/Art_of_Magic"),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Perforce_atrembl86_FalerhonLaptop_2080_20243_8INF960_DAS_AM_DAS_AM_Plugins_Art_of_Magic_Source_Art_of_Magic_Public_SpellParts_AMSpell_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
