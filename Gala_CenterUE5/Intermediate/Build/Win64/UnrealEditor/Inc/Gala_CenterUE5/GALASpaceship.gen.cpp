// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gala_CenterUE5/Public/GALASpaceship.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGALASpaceship() {}
// Cross Module References
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGALASpaceship_NoRegister();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGALASpaceship();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Gala_CenterUE5();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGALAPlayerFP_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AVehicleControlModule_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AGALASpaceship::execSpawnControlModule)
	{
		P_GET_STRUCT(FVector,Z_Param_location);
		P_GET_STRUCT(FRotator,Z_Param_rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnControlModule(Z_Param_location,Z_Param_rotation);
		P_NATIVE_END;
	}
	void AGALASpaceship::StaticRegisterNativesAGALASpaceship()
	{
		UClass* Class = AGALASpaceship::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnControlModule", &AGALASpaceship::execSpawnControlModule },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics
	{
		struct GALASpaceship_eventSpawnControlModule_Parms
		{
			FVector location;
			FRotator rotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_location;
		static const UECodeGen_Private::FStructPropertyParams NewProp_rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GALASpaceship_eventSpawnControlModule_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GALASpaceship_eventSpawnControlModule_Parms, rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::NewProp_location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::NewProp_rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGALASpaceship, nullptr, "SpawnControlModule", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::GALASpaceship_eventSpawnControlModule_Parms), Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGALASpaceship_SpawnControlModule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGALASpaceship_SpawnControlModule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGALASpaceship);
	UClass* Z_Construct_UClass_AGALASpaceship_NoRegister()
	{
		return AGALASpaceship::StaticClass();
	}
	struct Z_Construct_UClass_AGALASpaceship_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_minSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_minSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_pitchRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_pitchRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rollRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_rollRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_yawRateMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_yawRateMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_currentForwardSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_currentForwardSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cameraSpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_cameraSpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spaceshipCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spaceshipCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interiorCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_interiorCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shipMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_shipMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_driverPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_driverPlayer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spaceshipControlModule_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_spaceshipControlModule;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerNearControlModule_MetaData[];
#endif
		static void NewProp_playerNearControlModule_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_playerNearControlModule;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGALASpaceship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Gala_CenterUE5,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGALASpaceship_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGALASpaceship_SpawnControlModule, "SpawnControlModule" }, // 3012284611
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GALASpaceship.h" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, Acceleration), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_maxSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_maxSpeed = { "maxSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, maxSpeed), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_maxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_maxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_minSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_minSpeed = { "minSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, minSpeed), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_minSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_minSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_pitchRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_pitchRateMultiplier = { "pitchRateMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, pitchRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_pitchRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_pitchRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_rollRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_rollRateMultiplier = { "rollRateMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, rollRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_rollRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_rollRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_yawRateMultiplier_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_yawRateMultiplier = { "yawRateMultiplier", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, yawRateMultiplier), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_yawRateMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_yawRateMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_currentForwardSpeed_MetaData[] = {
		{ "Category", "Flight" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_currentForwardSpeed = { "currentForwardSpeed", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, currentForwardSpeed), METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_currentForwardSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_currentForwardSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_cameraSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_cameraSpringArm = { "cameraSpringArm", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, cameraSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_cameraSpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_cameraSpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipCam_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipCam = { "spaceshipCam", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, spaceshipCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipCam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_interiorCam_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_interiorCam = { "interiorCam", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, interiorCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_interiorCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_interiorCam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_shipMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_shipMesh = { "shipMesh", nullptr, (EPropertyFlags)0x00400000000b001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, shipMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_shipMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_shipMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_driverPlayer_MetaData[] = {
		{ "Comment", "//UPROPERTY(CPF_BlueprintCallable);\n" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
		{ "ToolTip", "UPROPERTY(CPF_BlueprintCallable);" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_driverPlayer = { "driverPlayer", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, driverPlayer), Z_Construct_UClass_AGALAPlayerFP_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_driverPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_driverPlayer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipControlModule_MetaData[] = {
		{ "Category", "GALASpaceship" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipControlModule = { "spaceshipControlModule", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALASpaceship, spaceshipControlModule), Z_Construct_UClass_AVehicleControlModule_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipControlModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipControlModule_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule_MetaData[] = {
		{ "Category", "GALASpaceship" },
		{ "ModuleRelativePath", "Public/GALASpaceship.h" },
	};
#endif
	void Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule_SetBit(void* Obj)
	{
		((AGALASpaceship*)Obj)->playerNearControlModule = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule = { "playerNearControlModule", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGALASpaceship), &Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGALASpaceship_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_maxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_minSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_pitchRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_rollRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_yawRateMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_currentForwardSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_cameraSpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_interiorCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_shipMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_driverPlayer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_spaceshipControlModule,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALASpaceship_Statics::NewProp_playerNearControlModule,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGALASpaceship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGALASpaceship>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGALASpaceship_Statics::ClassParams = {
		&AGALASpaceship::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGALASpaceship_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGALASpaceship_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGALASpaceship_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGALASpaceship()
	{
		if (!Z_Registration_Info_UClass_AGALASpaceship.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGALASpaceship.OuterSingleton, Z_Construct_UClass_AGALASpaceship_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGALASpaceship.OuterSingleton;
	}
	template<> GALA_CENTERUE5_API UClass* StaticClass<AGALASpaceship>()
	{
		return AGALASpaceship::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGALASpaceship);
	struct Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALASpaceship_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALASpaceship_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGALASpaceship, AGALASpaceship::StaticClass, TEXT("AGALASpaceship"), &Z_Registration_Info_UClass_AGALASpaceship, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGALASpaceship), 396570843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALASpaceship_h_261493701(TEXT("/Script/Gala_CenterUE5"),
		Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALASpaceship_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALASpaceship_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
