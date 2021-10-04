// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "ChallengeGiftBoxData.h"
#include "AthenaRewardItemReference.generated.h"

USTRUCT()
struct FORTNITEGAME_API FAthenaRewardItemReference
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAthenaCosmeticItemDefinition> ItemDefinition;
	
	UPROPERTY(EditAnywhere)
	FString TemplateId;
	
	UPROPERTY(EditAnywhere)
	int Quantity;
	
	//Missed Offset
	
	UPROPERTY(EditAnywhere)
	FChallengeGiftBoxData RewardGiftBox;
	
	UPROPERTY(EditAnywhere)
	bool IsChaseReward;
	
	//UPROPERTY(EditAnywhere)
	//EAthenaRewardItemType RewardType;
	
	//UPROPERTY(EditAnywhere)
	//EAthenaRewardVisualImportanceType RewardVisualImportanceType;
	
	//Missed Offset
	
	
};
