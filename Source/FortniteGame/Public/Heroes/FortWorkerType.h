// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Heroes/FortCharacterType.h"
#include "FortniteGame/FortniteGame.h"
#include "GameplayTags.h"
#include "FortWorkerType.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWorkerType : public UFortCharacterType
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EFortCustomGender Gender; 

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//TSoftObjectPtr<UFortItemIconDefinition> FixedPortrait;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bIsManager;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTagContainer ManagerSynergyTag;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTagContainer FixedPersonalityTag; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTagContainer FixedSetBonusTag;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MatchingPersonalityBonus; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int MismatchingPersonalityPenalty;
};
