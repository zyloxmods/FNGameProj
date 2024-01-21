// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "Weapons/Data/FortWeaponMeleeItemDefinition.h"
#include "Weapons/Data/FortWeaponAdditionalData.h"
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
	 FName MainMeshAttachmentSocketName; // 0x6e0(0x08)

	UPROPERTY(EditAnywhere)
	 FName OffhandMeshAttachmentSocketName; // 0x6e8(0x08)

	UPROPERTY(EditAnywhere)
	 FTransform MainMeshRelativeTransform; // 0x6f0(0x30)

	UPROPERTY(EditAnywhere)
	 FTransform OffhandMeshRelativeTransform; // 0x720(0x30)

	UPROPERTY(EditAnywhere)
	 FVector PickaxeImpactFXPreviewOffset; // 0x750(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector PickaxeDualWieldPreviewOffset; // 0x75c(0x0c)

	UPROPERTY(EditAnywhere)
	 FRotator PickaxeDualWieldPreviewRotation; // 0x768(0x0c)

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UAnimMontage> PreviewIdleMontage; // 0x778(0x28)

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UAnimMontage> PreviewSwingMontage; // 0x7a0(0x28)

	UPROPERTY(EditAnywhere)
	 FFortUICameraFrameTargetBounds CameraFramingBounds; // 0x7c8(0x14)

	UPROPERTY(EditAnywhere)
	 FVector CameraFramingBoundsCenterOffset; // 0x7dc(0x0c)
};
