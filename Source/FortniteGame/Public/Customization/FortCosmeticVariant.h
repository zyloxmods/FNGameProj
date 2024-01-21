// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTags.h"
#include "Items/FortItemDefinition.h"
#include "Items/FortAccountItemDefinition.h"
#include "Customization/BaseVariantDef.h"
#include "FortCosmeticVariant.generated.h"

/**
 * 
 */
class UAthenaItemWrapDefinition;

USTRUCT(BlueprintType)
struct FMcpVariantChannelInfo
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FGameplayTagContainer OwnedVariantTags;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (IgnoreForMemberInitializationTest))
		UFortItemDefinition* ItemVariantIsUsedFor;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString CustomData;
};


USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreviewElement
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FMcpVariantChannelInfo> VariantOptions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		UFortAccountItemDefinition* Item = nullptr;
};

USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreview
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FText UnlockCondition;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float PreviewTime = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FMcpVariantChannelInfo> VariantOptions;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FFortCosmeticVariantPreviewElement> AdditionalItems;
};

UCLASS(DefaultToInstanced, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticVariant : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> CustomPreviewTileMaterial;

	UPROPERTY(EditAnywhere)
		FGameplayTag VariantChannelTag;

	UPROPERTY(EditAnywhere)
		FText VariantChannelName;

	UPROPERTY(EditAnywhere)
		FGameplayTag ActiveVariantTag;
};

UCLASS(DefaultToInstanced, EditInlineNew)
class FORTNITEGAME_API UFortCosmeticVariantBackedByArray : public UFortCosmeticVariant
{
	GENERATED_BODY()
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticMaterialVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariantDef> MaterialOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticCharacterPartVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FPartVariantDef> PartOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticProfileLoadoutVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FLoadoutVariantDef> LoadoutAugmentations;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticItemTexture : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FItemTextureVariantDef ItemTextureVar;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortLoadoutTagDrivenVariantScript : public UObject
{
	GENERATED_BODY()

public:
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticLoadoutTagDrivenVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FTagDrivenVariantDef> Variants;                                              

	UPROPERTY(EditAnywhere)
	 UFortLoadoutTagDrivenVariantScript* TagScript;                                     
	
	UPROPERTY(EditAnywhere)
	bool bUseDefaultIfNoConditionsAreSatisfied = false;                   
};

UCLASS(BlueprintType) 
class FORTNITEGAME_API UFortCosmeticVariantApplyWrap : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FApplyWrapVariantDef WrapVariant;
};


UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticDynamicVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FDynamicVariantDef> DynamicOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticGameplayTagVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FGameplayTagVariantDef> GenericTagOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticParticleVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FParticleVariantDef> ParticleOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticSoundEffectVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FSoundEffectVariantDef> SoundEffectOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticMeshVariant : public UFortCosmeticVariantBackedByArray
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMeshVariantDef> MeshOptions;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticRichColorVariant : public UFortCosmeticVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int                                                AntiConflictChannel; 

	UPROPERTY(EditAnywhere)
	float                                              MinimumDistance;                                         

	UPROPERTY(EditAnywhere)
	float                                              MinimumContrast;                                         

	UPROPERTY(EditAnywhere)
	float                                              MinimumHueShift;                                          

	UPROPERTY(EditAnywhere)
	float                                              MinimumSaturationShift;                                  

	UPROPERTY(EditAnywhere)
	EFortRichColorConflictResolutionRules              AntiConflictRules;                                  

	UPROPERTY(EditAnywhere)
	 FRichColorVariantDef                        InlineVariant;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticNumericalVariant : public UFortCosmeticVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int DefaultStartingNumeric = 0;

	UPROPERTY(EditAnywhere)
		int MinNumericalValue;

	UPROPERTY(EditAnywhere)
		int MaxNumbericalValue;

	UPROPERTY(EditAnywhere)
	FName ZerosDigitParamName;                                    

	UPROPERTY(EditAnywhere)
	FName TensDigitParamName;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;
};



UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticProfileBannerVariant : public UFortCosmeticVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;

	UPROPERTY(EditAnywhere)
		FName                                       BannerIconParamName;

	UPROPERTY(EditAnywhere)
		FName                                       BannerPrimaryColorParamName;


	UPROPERTY(EditAnywhere)
		FName                                       BannerSecondaryColorParamName;

	UPROPERTY(EditAnywhere)
		FName                                       CC_PrimaryColorParamName;
};


UCLASS(BlueprintType)
class FORTNITEGAME_API UFortCosmeticFloatSliderVariant : public UFortCosmeticVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		float                                              DefaultStartingValue;

	UPROPERTY(EditAnywhere)
		float                                              MinParamValue;

	UPROPERTY(EditAnywhere)
		float                                              MaxParamValue;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortChallengeBundleItemDefinition> UnlockChallengeBundle;

	UPROPERTY(EditAnywhere)
		FName                                       MaterialParamName;

	UPROPERTY(EditAnywhere)
		FName                                       ParticleParamName;

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToAlter;

	UPROPERTY(EditAnywhere)
	TArray<TSoftObjectPtr<UFXSystemAsset>> ParticleSystemsToAlter;
};

