// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gala_CenterUE5/Gala_CenterUE5GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGala_CenterUE5GameModeBase() {}
// Cross Module References
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGala_CenterUE5GameModeBase_NoRegister();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AGala_CenterUE5GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Gala_CenterUE5();
// End Cross Module References
	void AGala_CenterUE5GameModeBase::StaticRegisterNativesAGala_CenterUE5GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGala_CenterUE5GameModeBase);
	UClass* Z_Construct_UClass_AGala_CenterUE5GameModeBase_NoRegister()
	{
		return AGala_CenterUE5GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Gala_CenterUE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gala_CenterUE5GameModeBase.h" },
		{ "ModuleRelativePath", "Gala_CenterUE5GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGala_CenterUE5GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::ClassParams = {
		&AGala_CenterUE5GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGala_CenterUE5GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AGala_CenterUE5GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGala_CenterUE5GameModeBase.OuterSingleton, Z_Construct_UClass_AGala_CenterUE5GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGala_CenterUE5GameModeBase.OuterSingleton;
	}
	template<> GALA_CENTERUE5_API UClass* StaticClass<AGala_CenterUE5GameModeBase>()
	{
		return AGala_CenterUE5GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGala_CenterUE5GameModeBase);
	struct Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Gala_CenterUE5GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Gala_CenterUE5GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGala_CenterUE5GameModeBase, AGala_CenterUE5GameModeBase::StaticClass, TEXT("AGala_CenterUE5GameModeBase"), &Z_Registration_Info_UClass_AGala_CenterUE5GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGala_CenterUE5GameModeBase), 3703207567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Gala_CenterUE5GameModeBase_h_2282932191(TEXT("/Script/Gala_CenterUE5"),
		Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Gala_CenterUE5GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Gala_CenterUE5GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
