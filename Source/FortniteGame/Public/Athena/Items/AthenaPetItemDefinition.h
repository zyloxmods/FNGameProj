// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "FortniteGame/FortniteGame.h"
#include "Sounds/FortTaggedSoundBank.h"
#include "AthenaPetItemDefinition.generated.h"


USTRUCT()
struct FPetResponseFromQuestSystem
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FDataTableRowHandle ObjectiveStatHandle;

	UPROPERTY(EditAnywhere)
		FGameplayTag ResponseTag;

	UPROPERTY(EditAnywhere)
		float ResponseDuration;
};

UCLASS()
class FORTNITEGAME_API UFortPetStimuliBank : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<FPetResponseFromQuestSystem> QuestTriggers;
};

UCLASS()
class FORTNITEGAME_API UAthenaPetItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		EAthenaPetAttachRule  PetAttachRule;

	UPROPERTY(EditAnywhere)
		FVector PetAttachOffset;

	UPROPERTY(EditAnywhere)
		FName PetAttachSocket;

	UPROPERTY(EditAnywhere)
		TArray<UFortPetStimuliBank*> StimuliBanks;

	UPROPERTY(EditAnywhere)
		FSoftClassPath PetPrefabClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFortTaggedSoundBank> PetSoundBank;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaPetItemDefinition", GetFName());
	}
};
