// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawns/Components/FortAttributeSet.h"
#include "Data/FortGameplayAttributeData.h"
#include "FortMovementSet.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortMovementSet : public UFortAttributeSet
{
	GENERATED_BODY()
	

		UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData WalkSpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData RunSpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData SprintSpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData FlySpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData CrouchedRunSpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData CrouchedSprintSpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData BackwardSpeedMultiplier;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData JumpHeight;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData GravityZScale;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData VehicleGravityZScale;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData SpeedMultiplier;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData LandSpeedMultiplier;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData SwimSpeedMultiplier;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData LandSpeedWhileBurrowingMultiplier;
};
