// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "Sound/SoundBase.h"
#include "FortTaggedSoundBank.generated.h"

USTRUCT()
struct FFortTaggedSoundCue
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTagQuery Requirements;

	UPROPERTY(EditAnywhere)
		USoundBase* Sound;
};

USTRUCT()
struct FTaggedSoundBankResponseList
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<FFortTaggedSoundCue> CueList;
};

UCLASS()
class FORTNITEGAME_API UFortTaggedSoundBank : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TMap<FGameplayTag, FTaggedSoundBankResponseList> FlattenedResponseMap;
};
