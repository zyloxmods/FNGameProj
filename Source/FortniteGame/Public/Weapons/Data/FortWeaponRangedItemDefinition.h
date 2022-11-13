// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/Data/FortWeaponItemDefinition.h"
#include "FortWeaponAdditionalData.h"
#include "FortWeaponRangedItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortWeaponRangedItemDefinition : public UFortWeaponItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UClass*                      ProjectileTemplate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bShouldUsePerfectAimWhenTargetingMinSpread = true;
};
