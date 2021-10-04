// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortWeaponItemDefinition.h"
#include "Particles/ParticleSystem.h"
#include "FortWeaponRangedItemDefinition.generated.h"

UCLASS()
class FORTNITEGAME_API UFortWeaponRangedItemDefinition : public UFortWeaponItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		FSoftClassPath ProjectileTemplate;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> BulletShellFXTemplate;

	UPROPERTY(EditAnywhere)
		bool bUseNativeWeaponTrace;

	UPROPERTY(EditAnywhere)
		bool bTraceThroughPawns;

	UPROPERTY(EditAnywhere)
		bool bTraceThroughWorld;

	UPROPERTY(EditAnywhere)
		bool bShouldSpawnBulletShellFX;

	UPROPERTY(EditAnywhere)
		bool bShouldUsePerfectAimWhenTargetingMinSpread;

	UPROPERTY(EditAnywhere)
		bool bDoNotAllowDoublePump;

	UPROPERTY(EditAnywhere)
		bool bUseOnTouch;

	UPROPERTY(EditAnywhere)
		bool bAllowADSInAir;

	UPROPERTY(EditAnywhere)
		bool bShowReticleHitNotifyAtImpactLocation;

	UPROPERTY(EditAnywhere)
		bool bForceProjectileTooltip;

	UPROPERTY(EditAnywhere)
		bool bSecondaryFireRequiresAmmo;
};
