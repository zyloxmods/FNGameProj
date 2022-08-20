// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../Weapons/FortWeaponMeleeItemDefinition.h"
#include "AthenaCosmeticItemDefinition.h"
#include "../../Data/FortUICameraFrameTargetBounds.h"
#include "AthenaPickaxeItemDefinition.generated.h"


UCLASS(BlueprintType)
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
		FFortUICameraFrameTargetBounds CameraFramingBounds;
};