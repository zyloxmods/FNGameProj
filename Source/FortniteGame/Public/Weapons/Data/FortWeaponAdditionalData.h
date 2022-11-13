// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTags.h"
#include "../../../FortniteGame.h"
#include "Abilities/FortGameplayAbility.h"
#include "FortWeaponAdditionalData.generated.h"

/**
 * 
 */
UCLASS(DefaultToInstanced, EditInlineNew)
class FORTNITEGAME_API UFortWeaponAdditionalData : public UObject
{
	GENERATED_BODY()

};

UCLASS(BlueprintType)
class UFortWeaponAdditionalData_AudioVisualizerData : public UFortWeaponAdditionalData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		UTexture* AudioVisualizerIconOverride;

};


USTRUCT(BlueprintType)
struct FFortAnimInput_PlayerAnimAsset
{
	GENERATED_BODY() // To Do!

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName NotDone;

	
};

UCLASS(BlueprintType)
class UFortWeaponAnimSet : public UDataAsset
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		float DelayBetweenFireAndFullBodySprint;

	UPROPERTY(EditAnywhere)
		FFortAnimInput_PlayerAnimAsset MaleAnimAsset;

	UPROPERTY(EditAnywhere)
		FFortAnimInput_PlayerAnimAsset FemaleAnimAsset;

};

USTRUCT(BlueprintType)
struct FFortUICameraFrameTargetBounds
{
	GENERATED_BODY() 

public:

	UPROPERTY(EditAnywhere)
	 FVector Origin;

	UPROPERTY(EditAnywhere)
	float CylinderHalfHeight;

	UPROPERTY(EditAnywhere)
	float CylinderRadius;
};


UCLASS(BlueprintType)
class UFortWeaponAdditionalData_SingleWieldState : public UFortWeaponAdditionalData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTag AssociatedTagVariant;

	UPROPERTY(EditAnywhere)
		UClass* PrimaryFireAbility_InState;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortWeaponAnimSet> AnimSet_InState;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> EquipMontage_InState;

	UPROPERTY(EditAnywhere)
		bool bHideOffhandMesh;

	UPROPERTY(EditAnywhere)
		bool bUseSeparatePreviewOffsets;

	UPROPERTY(EditAnywhere)
		FVector ImpactFxPreviewOffset;

	UPROPERTY(EditAnywhere)
		FVector OffHandPreviewOffset;

	UPROPERTY(EditAnywhere)
		FRotator OffHandPreviewRotation;

	UPROPERTY(EditAnywhere)
		FRotator InitialPreviewRotation;

	UPROPERTY(EditAnywhere)
		float FrontendPreviewScale;

	UPROPERTY(EditAnywhere)
		FFortUICameraFrameTargetBounds CameraFramingBounds;

	UPROPERTY(EditAnywhere)
		EFortWeaponCoreAnimation AnimationStyleToUse;

	UPROPERTY(EditAnywhere)
		UFortGameplayAbility* LiveAbility;

	UPROPERTY(EditAnywhere)
		UFortWeaponAnimSet* LiveAnimSet;

	UPROPERTY(EditAnywhere)
		UAnimMontage* LiveMontage;

};

