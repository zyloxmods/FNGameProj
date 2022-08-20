// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortWeaponItemDefinition.h"
#include "FortWeaponMeleeItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWeaponMeleeItemDefinition : public UFortWeaponItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		bool bNeedsMaterial0MID;

	UPROPERTY(EditAnywhere)
		bool bWatchKills;

	UPROPERTY(EditAnywhere)
		bool bCandyCaneKillReaction;
};