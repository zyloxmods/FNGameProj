// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "PetResponseFromQuestSystem.generated.h"


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
