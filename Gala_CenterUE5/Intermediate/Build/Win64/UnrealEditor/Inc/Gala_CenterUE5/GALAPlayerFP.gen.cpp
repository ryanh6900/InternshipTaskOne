// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gala_CenterUE5/Public/GALAPlayerFP.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGALAPlayerFP() {}
// Cross Module References
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGALAPlayerFP_NoRegister();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGALAPlayerFP();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Gala_CenterUE5();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AGALAPlayerFP::StaticRegisterNativesAGALAPlayerFP()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGALAPlayerFP);
	UClass* Z_Construct_UClass_AGALAPlayerFP_NoRegister()
	{
		return AGALAPlayerFP::StaticClass();
	}
	struct Z_Construct_UClass_AGALAPlayerFP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerFPCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerFPCam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGALAPlayerFP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Gala_CenterUE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAPlayerFP_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GALAPlayerFP.h" },
		{ "ModuleRelativePath", "Public/GALAPlayerFP.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGALAPlayerFP_Statics::NewProp_playerFPCam_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GALAPlayerFP.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGALAPlayerFP_Statics::NewProp_playerFPCam = { "playerFPCam", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGALAPlayerFP, playerFPCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGALAPlayerFP_Statics::NewProp_playerFPCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAPlayerFP_Statics::NewProp_playerFPCam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGALAPlayerFP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGALAPlayerFP_Statics::NewProp_playerFPCam,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGALAPlayerFP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGALAPlayerFP>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGALAPlayerFP_Statics::ClassParams = {
		&AGALAPlayerFP::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGALAPlayerFP_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGALAPlayerFP_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGALAPlayerFP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGALAPlayerFP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGALAPlayerFP()
	{
		if (!Z_Registration_Info_UClass_AGALAPlayerFP.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGALAPlayerFP.OuterSingleton, Z_Construct_UClass_AGALAPlayerFP_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGALAPlayerFP.OuterSingleton;
	}
	template<> GALA_CENTERUE5_API UClass* StaticClass<AGALAPlayerFP>()
	{
		return AGALAPlayerFP::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGALAPlayerFP);
	struct Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALAPlayerFP_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALAPlayerFP_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGALAPlayerFP, AGALAPlayerFP::StaticClass, TEXT("AGALAPlayerFP"), &Z_Registration_Info_UClass_AGALAPlayerFP, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGALAPlayerFP), 4053339300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALAPlayerFP_h_1530050186(TEXT("/Script/Gala_CenterUE5"),
		Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALAPlayerFP_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_GALAPlayerFP_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
