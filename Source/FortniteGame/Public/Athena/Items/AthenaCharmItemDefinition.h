// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaCharmItemDefinition.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FCharmSoundAssetEntry
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
		FSoftObjectPath Sound;

	UPROPERTY(EditAnywhere)
		FName Desc;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaCharmItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FSoftObjectPath CharmModifierBlueprint;

	UPROPERTY(EditAnywhere)
		FSoftClassPath CharmPrefabClass;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath SkeletalMesh;

	UPROPERTY(EditAnywhere)
		FSoftClassPath AnimClass;

	UPROPERTY(EditAnywhere)
		FSoftClassPath WeaponAnimClass;

	UPROPERTY(EditAnywhere)
		TArray<FCharmSoundAssetEntry> CharmSounds;
};