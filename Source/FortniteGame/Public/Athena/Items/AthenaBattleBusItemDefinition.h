// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaBattleBusItemDefinition.generated.h"

/**
 * 
 */

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaBattleBusItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FSoftObjectPath IgnitionSound;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath LobbyLoopingMusic;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath LobbyLoopingSound;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath FlightLoopingMusic;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath FlightLoopingSound;

	UPROPERTY(EditAnywhere)
		FSoftClassPath BusPrefabClass;
};