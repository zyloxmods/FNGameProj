// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "../../Weapons/Data/FortWeaponMeleeItemDefinition.h"
#include "../../Weapons/Data/FortWeaponAdditionalData.h"
#include "AthenaPickaxeItemDefinition.generated.h"

/**
 * 
 */

UCLASS()
class FORTNITEGAME_API UAthenaPickaxeItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere)
		UFortWeaponMeleeItemDefinition* WeaponDefinition;

	UPROPERTY(EditAnywhere)
		FName MainMeshAttachmentSocketName;

	UPROPERTY(EditAnywhere)
		FName OffhandMeshAttachmentSocketName;

	UPROPERTY(EditAnywhere)
		FTransform MainMeshRelativeTransform;

	UPROPERTY(EditAnywhere)
		FTransform OffhandMeshRelativeTransform;

	UPROPERTY(EditAnywhere)
		FVector PickaxeImpactFXPreviewOffset;

	UPROPERTY(EditAnywhere)
		FVector PickaxeDualWieldPreviewOffset;

	UPROPERTY(EditAnywhere)
		FRotator PickaxeDualWieldPreviewRotation;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> PreviewIdleMontage;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> PreviewSwingMontage;

	UPROPERTY(EditAnywhere)
		FFortUICameraFrameTargetBounds CameraFramingBounds;

	UPROPERTY(EditAnywhere)
		FVector CameraFramingBoundsCenterOffset;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaPickaxe", GetFName());
	}
};
