// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FPetResponseFromQuestSystem.h"
#include "FortPetStimuliBank.generated.h"

UCLASS()
class FORTNITEGAME_API UFortPetStimuliBank : public UDataAsset
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	TArray<FPetResponseFromQuestSystem> QuestTriggers;
};
