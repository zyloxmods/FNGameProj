// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortniteGame/FortniteGame.h"
#include "GameplayTags.h"
#include "UObject/SoftObjectPath.h"
#include "CustomCharacterPart.generated.h"

/**
 * 
 */

USTRUCT()
struct FCustomPartMaterialOverrideData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		int MaterialOverrideIndex;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};

USTRUCT()
struct FCustomPartScalarParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForScalarParameter;

	UPROPERTY(EditAnywhere)
		FName ScalarParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		float ScalarOverride;
};

USTRUCT()
struct FCustomPartTextureParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForTextureParameter;

	UPROPERTY(EditAnywhere)
		FName TextureParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture> TextureOverride;
};

USTRUCT()
struct FCustomPartVectorParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForVectorParameter;

	UPROPERTY(EditAnywhere)
		FName VectorParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		FLinearColor VectorOverride;

};

UCLASS()
class FORTNITEGAME_API UCustomCharacterPart : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		EFortCustomGender GenderPermitted;

	UPROPERTY(EditAnywhere, AssetRegistrySearchable)
		EFortCustomBodyType BodyTypesPermitted;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AssetRegistrySearchable)
		TEnumAsByte<EFortCustomPartType> CharacterPartType;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer BoneSetsToHide;

	UPROPERTY(EditAnywhere)
		bool bShouldHideBonesForThisPart;

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer DisallowedCosmeticTags;

	UPROPERTY(EditAnywhere)
		bool bGameplayRelevantCosmeticPart;

	UPROPERTY(EditAnywhere)
		bool bAttachToSocket;

	UPROPERTY(EditAnywhere)
		bool bIgnorePart;

	UPROPERTY(EditAnywhere)
		FSoftClassPath PartModifierBlueprint;

	UPROPERTY(EditAnywhere, Instanced)
		class UCustomCharacterPartData* AdditionalData;

	//UPROPERTY(EditAnywhere)
		//TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

//	UPROPERTY(EditAnywhere)
	//	TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;

	UPROPERTY(EditAnywhere)
		float FrontEndBackPreviewRotationOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AssetRegistrySearchable)
		TSoftObjectPtr<USkeletalMesh> SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TSoftObjectPtr<USkeletalMesh>> MasterSkeletalMeshes;

	UPROPERTY(EditAnywhere)
		bool  bSinglePieceMesh;

	UPROPERTY(EditAnywhere)
		bool  bSupportsColorSwatches;

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
		TArray<class UObject*> FoleyLibraries;

	UPROPERTY(EditAnywhere)
		int MaterialOverrideFlags;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<class UParticleSystem> IdleEffect;

	UPROPERTY(EditAnywhere)
		FName IdleFXSocketName;

	UPROPERTY(EditAnywhere)
		bool bAutoActivate;

	//UPROPERTY(EditAnywhere)
		//UMarshalledVFX_AuthoredDataConfig* AuthoredData;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("CustomCharacterPart", GetFName());
	}
};
