// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortAbilitySet.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortAbilitySet : public UPrimaryDataAsset
{
	GENERATED_BODY()
	// to do
};

UCLASS()
class FORTNITEGAME_API UFortAbilityKit : public UFortAbilitySet
{
	GENERATED_BODY()


	UPROPERTY(EditAnywhere)
	FText                                       DisplayName;
	// to do
};

