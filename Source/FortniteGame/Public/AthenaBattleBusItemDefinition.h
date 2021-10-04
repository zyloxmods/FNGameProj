// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaBattleBusItemDefinition.generated.h"

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