// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FCharmSoundAssetEntry.generated.h"

USTRUCT(BlueprintType)
struct FCharmSoundAssetEntry
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FSoftObjectPath Sound;

	UPROPERTY(EditAnywhere)
	FName Desc;
};