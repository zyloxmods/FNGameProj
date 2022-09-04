// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "McpItemDefinitionBase.h"
#include "GameplayTags.h"
#include "FortniteGame/FortniteGame.h"
#include "Particles/ParticleSystem.h"
#include "NiagaraSystem.h"
#include "Customization/CustomCharacterPart.h"
#include "BaseVariantDef.generated.h"

/**
 * 
 */
USTRUCT()
struct FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		bool bStartUnlocked;

	UPROPERTY(EditAnywhere)
		bool bIsDefault;

	UPROPERTY(EditAnywhere)
		bool bHideIfNotOwned;

	UPROPERTY(EditAnywhere)
		FGameplayTag CustomizationVariantTag;

	UPROPERTY(EditAnywhere)
		FText VariantName;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> PreviewImage;

	UPROPERTY(EditAnywhere)
		FText UnlockRequirements;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMcpItemDefinitionBase> UnlockingItemDef;
};

USTRUCT()
struct FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName ParamName;
};

USTRUCT()
struct FMaterialVariants
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> MaterialToSwap;

	UPROPERTY(EditAnywhere)
		FName ComponentToOverride;

	UPROPERTY(EditAnywhere)
		FName CascadeMaterialName;

	UPROPERTY(EditAnywhere)
		int MaterialOverrideIndex;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};

USTRUCT()
struct FMaterialVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

};

USTRUCT()
struct FMaterialTextureVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture> Value;
};

USTRUCT()
struct FMaterialFloatVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float Value;
};

USTRUCT()
struct FMaterialVectorVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FLinearColor Value;
};

USTRUCT()
struct FMaterialParamterDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> MaterialToAlter;

	UPROPERTY(EditAnywhere)
		FName CascadeMaterialName;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVectorVariant> ColorParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialTextureVariant> TextureParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialFloatVariant> FloatParams;
};


USTRUCT()
struct FParticleVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFXSystemAsset> ParticleSystemToAlter;

	UPROPERTY(EditAnywhere)
		FName ComponentToOverride;

	UPROPERTY(EditAnywhere)
	   TSoftObjectPtr<UFXSystemAsset> OverrideParticleSystem; 
};

USTRUCT()
struct FVectorParticleParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FVector                     Value;

	UPROPERTY(EditAnywhere)
		FName                       ParameterName;

};

USTRUCT()
struct FVectorParamVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FVector Value;
};

USTRUCT()
struct FParticleParamterVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVectorVariant> ColorParams;

	UPROPERTY(EditAnywhere)
		TArray<FVectorParamVariant>  VectorParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialFloatVariant> FloatParams;
};

USTRUCT()
struct FFortPortableSoftParticles 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	EFXType FXType; 

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UNiagaraSystem> NiagaraVersion;

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UParticleSystem> CascadeVersion; 
};

USTRUCT()
struct FManagedParticleSwapVariant
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	FGameplayTag  ParamGroupTag;
	
	UPROPERTY(EditAnywhere)
		FFortPortableSoftParticles ParticleToOverride;
};

USTRUCT()
struct FManagedParticleParamVariant
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	FGameplayTag ParamGroupTag;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVectorVariant> ColorParams;

	UPROPERTY(EditAnywhere)
		TArray<FVectorParamVariant>  VectorParams;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialFloatVariant> FloatParams;
};

USTRUCT()
struct FFoleySoundVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<UObject*> LibrariesToAdd;

	UPROPERTY(EditAnywhere)
		TArray<UObject*> LibrariesToRemove;

};

USTRUCT()
struct FSocketTransformVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName SourceSocketName;

	UPROPERTY(EditAnywhere)
		FName  OverridSocketName;
};

USTRUCT()
struct FScriptedActionVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTag ActionTag;
};

USTRUCT()
struct FCosmeticMetaTagContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer MetaTagsToApply;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer MetaTagsToRemove;
};

USTRUCT()
struct FScriptedActionVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FScriptedActionVariant> VariantActions;

	UPROPERTY(EditAnywhere)
	FCosmeticMetaTagContainer MetaTags;
};

USTRUCT()
struct FPartVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UCustomCharacterPart>> VariantParts;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

	UPROPERTY(EditAnywhere)
		TArray<FMaterialParamterDef> VariantMaterialParams;
	/*
	UPROPERTY(EditAnywhere)
	TArray<FVariantParticleSystemInitializerData> InitalParticelSystemData;
	*/
	UPROPERTY(EditAnywhere)
		TArray<FParticleVariant> VariantParticles;

	UPROPERTY(EditAnywhere)
		TArray<FParticleParamterVariant> VariantParticleParams;

	UPROPERTY(EditAnywhere)
		TArray<FManagedParticleSwapVariant> VariantSwapInParticles;

	UPROPERTY(EditAnywhere)
		TArray<FManagedParticleParamVariant> VariantAlteredParticleParams;

	UPROPERTY(EditAnywhere)
		TArray<FFoleySoundVariant> VariantFoley;

	UPROPERTY(EditAnywhere)
		TArray<FSocketTransformVariant> SocketTransforms;

	UPROPERTY(EditAnywhere)
		TArray<FScriptedActionVariant> VariantActions;

	UPROPERTY(EditAnywhere)
		FCosmeticMetaTagContainer MetaTags;

};