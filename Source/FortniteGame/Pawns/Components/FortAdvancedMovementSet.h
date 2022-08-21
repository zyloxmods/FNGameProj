// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pawns/Components/FortAttributeSet.h"
#include "Pawns/Components/Data/FortGameplayAttributeData.h"
#include "FortAdvancedMovementSet.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortAdvancedMovementSet : public UFortAttributeSet
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData GroundFriction;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData BrakingDecelerationWalking;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData BrakingDecelerationFalling;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData BrakingDecelerationFlying;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData MaxAcceleration;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData MaxAccelerationFlying;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData BrakingFrictionFactor;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData JumpZVelocity;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData JumpHorizontalAccelerationOverride;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData JumpHorizontalVelocityOverride;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData MinAnalogWalkSpeed;

	UPROPERTY(EditAnywhere)
		FFortGameplayAttributeData AirControlMultiplier;

};
