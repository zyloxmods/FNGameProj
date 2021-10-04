// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EmoteActivationTrigger.generated.h"

USTRUCT()
struct FORTNITEGAME_API FEmoteActivationTrigger
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery                           EmoteTagQuery;
	
	UPROPERTY(EditAnywhere)
	FGameplayTagQuery                           PlayerTagQuery;
	
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer                       TagsToApply;
	
	UPROPERTY(EditAnywhere)
	float                                       Duration;
	
	//Missed Offset
	
};
