// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gala_CenterUE5/Public/MyFloatingPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyFloatingPawnMovement() {}
// Cross Module References
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_UMyFloatingPawnMovement_NoRegister();
	GALA_CENTERUE5_API UClass* Z_Construct_UClass_UMyFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	UPackage* Z_Construct_UPackage__Script_Gala_CenterUE5();
// End Cross Module References
	void UMyFloatingPawnMovement::StaticRegisterNativesUMyFloatingPawnMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyFloatingPawnMovement);
	UClass* Z_Construct_UClass_UMyFloatingPawnMovement_NoRegister()
	{
		return UMyFloatingPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_UMyFloatingPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyFloatingPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Gala_CenterUE5,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "MyFloatingPawnMovement.h" },
		{ "ModuleRelativePath", "Public/MyFloatingPawnMovement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyFloatingPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyFloatingPawnMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyFloatingPawnMovement_Statics::ClassParams = {
		&UMyFloatingPawnMovement::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyFloatingPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyFloatingPawnMovement()
	{
		if (!Z_Registration_Info_UClass_UMyFloatingPawnMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyFloatingPawnMovement.OuterSingleton, Z_Construct_UClass_UMyFloatingPawnMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyFloatingPawnMovement.OuterSingleton;
	}
	template<> GALA_CENTERUE5_API UClass* StaticClass<UMyFloatingPawnMovement>()
	{
		return UMyFloatingPawnMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyFloatingPawnMovement);
	struct Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_MyFloatingPawnMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_MyFloatingPawnMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyFloatingPawnMovement, UMyFloatingPawnMovement::StaticClass, TEXT("UMyFloatingPawnMovement"), &Z_Registration_Info_UClass_UMyFloatingPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyFloatingPawnMovement), 47027701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_MyFloatingPawnMovement_h_1807848913(TEXT("/Script/Gala_CenterUE5"),
		Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_MyFloatingPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Gala_CenterUE5_Source_Gala_CenterUE5_Public_MyFloatingPawnMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
