// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomCharacterPartData.h"
#include "EFortCustomGender.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomPartType.h"
#include "FCustomPartMaterialOverrideData.h"
#include "FCustomPartTextureParameter.h"
#include "FCustomPartScalarParameter.h"
#include "FCustomPartVectorParameter.h"
#include "FortMontageLookupTable.h"
#include "FortWorldItemDefinition.h"
#include "MarshalledVFX_AuthoredDataConfig.h"
#include "CustomCharacterPart.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UCustomCharacterPart : public UFortWorldItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TEnumAsByte<Enums::EFortCustomGender> GenderPermitted;

	UPROPERTY(EditAnywhere)
	    TEnumAsByte<Body::EFortCustomBodyType> BodyTypesPermitted;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EFortCustomPartType CharacterPartType;

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

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMontageLookupTable> DefaultMontageLookupTable;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortMontageLookupTable> OverrideMontageLookupTable;
		
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> FrontendAnimMontageIdleOverride;
		
	UPROPERTY(EditAnywhere)
		float FrontEndBackPreviewRotationOffset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
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
		TArray<UObject*> FoleyLibraries;

	UPROPERTY(EditAnywhere)
		int MaterialOverrideFlags;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> IdleEffect;
	

		
	UPROPERTY(EditAnywhere)
		FName IdleFXSocketName;

	UPROPERTY(EditAnywhere)
		bool bAutoActivate;
	
	UPROPERTY(EditAnywhere)
	UMarshalledVFX_AuthoredDataConfig* AuthoredData;
	
};