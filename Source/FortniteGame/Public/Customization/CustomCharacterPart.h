// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortniteGame/FortniteGame.h"
#include "GameplayTags.h"
#include "Animation/BlendSpace.h"
#include "Materials/Material.h"
#include "Animation/FortMontageLookupTable.h"
#include "UObject/SoftObjectPath.h"
#include "NiagaraSystem.h"
#include "CustomCharacterPart.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FCustomPartMaterialOverrideData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		int MaterialOverrideIndex = 0;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};

USTRUCT(BlueprintType)
struct FCustomPartScalarParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForScalarParameter = 0;

	UPROPERTY(EditAnywhere)
		FName ScalarParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		float ScalarOverride = 0;
};

USTRUCT(BlueprintType)
struct FCustomPartTextureParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForTextureParameter = 0;

	UPROPERTY(EditAnywhere)
		FName TextureParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture> TextureOverride;
};

USTRUCT(BlueprintType)
struct FCustomPartVectorParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForVectorParameter = 0;

	UPROPERTY(EditAnywhere)
		FName VectorParameterNameForMaterial;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FLinearColor VectorOverride;

};
USTRUCT(BlueprintType)
struct FFortAnimInput_PlayerSkydiveAnimAsset 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_BS_Female; // 0x00(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_BS_Male; // 0x08(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_ToGlide_BS_Female; // 0x10(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_ToGlide_BS_Male; // 0x18(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_Lean_Additive_BS_Female; // 0x20(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_Lean_Additive_BS_Male; // 0x28(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UAnimSequence* Dive_Lean_Center_Pose; // 0x30(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_Turn_Additive_BS_Female; // 0x38(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_Turn_Additive_BS_Male; // 0x40(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_DriftA_Additive_BS; // 0x48(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_DriftB_Additive_BS; // 0x50(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_DriftC_Additive_BS; // 0x58(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_FidgetA_Additive_BS; // 0x60(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_FidgetB_Additive_BS; // 0x68(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Dive_FidgetC_Additive_BS; // 0x70(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_BS_Female; // 0x78(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_BS_Male; // 0x80(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_ToDive_BS_Female; // 0x88(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_ToDive_BS_Male; // 0x90(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_Lean_Additive_BS_Female; // 0x98(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_Lean_Additive_BS_Male; // 0xa0(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_Turn_Additive_BS_Female; // 0xa8(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UBlendSpace* Glide_Turn_Additive_BS_Male; // 0xb0(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UAnimSequence* Glide_DriftA_Additive; // 0xb8(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UAnimSequence* Glide_DriftB_Additive; // 0xc0(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UAnimSequence* Glide_DriftC_Additive; // 0xc8(0x08)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	 UAnimSequence* Glide_DriftZero_Additive; // 0xd0(0x08)
};

UCLASS(BlueprintType)
class UFortPlayerSkydiveAnimSet : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FFortAnimInput_PlayerSkydiveAnimAsset AnimAsset;

};
USTRUCT(BlueprintType)
struct FAttachToComponentParams
{
	GENERATED_BODY()

public:
	/*
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	   EAttachmentRule LocationRule;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	   EAttachmentRule RotationRule;                                             // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest)
	   EAttachmentRule ScaleRule;                                                // 0x0002(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	   */
	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	   bool bWeldSimulatedBodies = false;                                     // 0x0003(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FCharacterPartAttachmentParams
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FName SocketName;       

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	ECharacterPartAttachmentTargetType AttachmentTarget;     

	UPROPERTY(EditAnywhere)
	 FAttachToComponentParams AttachmentRules;                                          

};



USTRUCT(BlueprintType)
struct FFortCosmeticOverlayMaterialData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface> LowQualityMaterial;                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.FortCosmeticOverlayMaterialData.LowQualityMaterial

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface>  HighQualityMaterial;                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty FortniteGame.FortCosmeticOverlayMaterialData.HighQualityMaterial
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UCustomCharacterPart : public UPrimaryDataAsset
{
	GENERATED_BODY()

public: 
	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		TEnumAsByte<EFortCustomGender> GenderPermitted = EFortCustomGender::Male;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		TEnumAsByte<EFortCustomBodyType> BodyTypesPermitted;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AssetRegistrySearchable)
		TEnumAsByte<EFortCustomPartType> PartType;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer BoneSetsToHide;

	UPROPERTY(EditAnywhere)
		bool bShouldHideBonesForThisPart;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer GameplayTags;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer DisallowedCosmeticTags;

	UPROPERTY(EditAnywhere)
		bool bGameplayRelevantCosmeticPart;

	UPROPERTY(EditAnywhere)
		bool bContributesToPartBudget;

	UPROPERTY(EditAnywhere)
		bool bAttachToSocket;

	UPROPERTY(EditAnywhere)
		bool bIgnorePart;

	UPROPERTY(EditAnywhere)
		FSoftClassPath PartModifierBlueprint;

	UPROPERTY(EditAnywhere, Instanced)
		class UCustomCharacterPartData* AdditionalData;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortPlayerSkydiveAnimSet> SkydiveAnimSet;

	UPROPERTY(EditAnywhere)
		float FrontEndBackPreviewRotationOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AssetRegistrySearchable)
		TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TSoftObjectPtr<USkeletalMesh>> MasterSkeletalMeshes;

	UPROPERTY(EditAnywhere)
		bool  bSinglePieceMesh;

	UPROPERTY(EditAnywhere)
		bool  bSupportsColorSwatches = true;

	UPROPERTY(EditAnywhere)
		bool  bAllowStaticRenderPath;
	
	UPROPERTY(EditAnywhere)
		TArray<FCustomPartMaterialOverrideData> MaterialOverrides;

	UPROPERTY(EditAnywhere)
		TArray< FCustomPartTextureParameter> TextureParameters;

	UPROPERTY(EditAnywhere)
		TArray<FCustomPartScalarParameter> ScalarParameters;

	UPROPERTY(EditAnywhere)
		TArray<FCustomPartVectorParameter> VectorParameters;

	UPROPERTY(EditAnywhere)
	FFortCosmeticOverlayMaterialData OverlayMaterialData;
		
	UPROPERTY(EditAnywhere)
		TArray<UObject*> SoundLibraries;

	UPROPERTY(EditAnywhere)
		int MaterialOverrideFlags = 0;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> IdleEffect;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UNiagaraSystem> IdleEffectNiagara;

	UPROPERTY(EditAnywhere)
		FName IdleFXSocketName;

	UPROPERTY(EditAnywhere)
		bool bUseIdleFXNativeCustomAttachmentParams;

	UPROPERTY(EditAnywhere)
		FCharacterPartAttachmentParams IdleFXNativeCustomAttachmentParams;

	UPROPERTY(EditAnywhere)
		bool bAutoActivate;



	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("CustomCharacterPart", GetFName());
	}
};
