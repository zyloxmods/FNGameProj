// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "FCharmSoundAssetEntry.h"
#include "AthenaCharmItemDefinition.generated.h"

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