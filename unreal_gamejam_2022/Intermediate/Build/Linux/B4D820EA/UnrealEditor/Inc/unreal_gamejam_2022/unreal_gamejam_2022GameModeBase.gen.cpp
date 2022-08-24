// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "unreal_gamejam_2022/unreal_gamejam_2022GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeunreal_gamejam_2022GameModeBase() {}
// Cross Module References
	UNREAL_GAMEJAM_2022_API UClass* Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_NoRegister();
	UNREAL_GAMEJAM_2022_API UClass* Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_unreal_gamejam_2022();
// End Cross Module References
	void Aunreal_gamejam_2022GameModeBase::StaticRegisterNativesAunreal_gamejam_2022GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aunreal_gamejam_2022GameModeBase);
	UClass* Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_NoRegister()
	{
		return Aunreal_gamejam_2022GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_unreal_gamejam_2022,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "unreal_gamejam_2022GameModeBase.h" },
		{ "ModuleRelativePath", "unreal_gamejam_2022GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aunreal_gamejam_2022GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::ClassParams = {
		&Aunreal_gamejam_2022GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase()
	{
		if (!Z_Registration_Info_UClass_Aunreal_gamejam_2022GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aunreal_gamejam_2022GameModeBase.OuterSingleton, Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aunreal_gamejam_2022GameModeBase.OuterSingleton;
	}
	template<> UNREAL_GAMEJAM_2022_API UClass* StaticClass<Aunreal_gamejam_2022GameModeBase>()
	{
		return Aunreal_gamejam_2022GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aunreal_gamejam_2022GameModeBase);
	struct Z_CompiledInDeferFile_FID_unreal_gamejam_2022_Source_unreal_gamejam_2022_unreal_gamejam_2022GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_gamejam_2022_Source_unreal_gamejam_2022_unreal_gamejam_2022GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aunreal_gamejam_2022GameModeBase, Aunreal_gamejam_2022GameModeBase::StaticClass, TEXT("Aunreal_gamejam_2022GameModeBase"), &Z_Registration_Info_UClass_Aunreal_gamejam_2022GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aunreal_gamejam_2022GameModeBase), 3583209449U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_gamejam_2022_Source_unreal_gamejam_2022_unreal_gamejam_2022GameModeBase_h_394945179(TEXT("/Script/unreal_gamejam_2022"),
		Z_CompiledInDeferFile_FID_unreal_gamejam_2022_Source_unreal_gamejam_2022_unreal_gamejam_2022GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_gamejam_2022_Source_unreal_gamejam_2022_unreal_gamejam_2022GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
