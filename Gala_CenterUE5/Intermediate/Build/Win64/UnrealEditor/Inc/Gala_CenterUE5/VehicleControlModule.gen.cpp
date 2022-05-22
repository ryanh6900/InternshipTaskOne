// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gala_CenterUE5/Public/VehicleControlModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVehicleControlModule() {}
// Cross Module References
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AVehicleControlModule_NoRegister();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_AVehicleControlModule();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Gala_CenterUE5();
// End Cross Module References
	void AVehicleControlModule::StaticRegisterNativesAVehicleControlModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVehicleControlModule);
	UClass* Z_Construct_UClass_AVehicleControlModule_NoRegister()
	{
		return AVehicleControlModule::StaticClass();
	}
	struct Z_Construct_UClass_AVehicleControlModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVehicleControlModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Gala_CenterUE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVehicleControlModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VehicleControlModule.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VehicleControlModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVehicleControlModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVehicleControlModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVehicleControlModule_Statics::ClassParams = {
		&AVehicleControlModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVehicleControlModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVehicleControlModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVehicleControlModule()
	{
		if (!Z_Registration_Info_UClass_AVehicleControlModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVehicleControlModule.OuterSingleton, Z_Construct_UClass_AVehicleControlModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVehicleControlModule.OuterSingleton;
	}
	template<> GALA_CENTERUE5_API UClass* StaticClass<AVehicleControlModule>()
	{
		return AVehicleControlModule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVehicleControlModule);
	struct Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_VehicleControlModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_VehicleControlModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVehicleControlModule, AVehicleControlModule::StaticClass, TEXT("AVehicleControlModule"), &Z_Registration_Info_UClass_AVehicleControlModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVehicleControlModule), 1445862045U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_VehicleControlModule_h_4055622251(TEXT("/Script/Gala_CenterUE5"),
		Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_VehicleControlModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_VehicleControlModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
