// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharmPreviewEntry.h"
#include "EFortCustomPartType.h"
#include "GameplayTagContainer.h"
#include "CharmSlotMetadata.generated.h"

USTRUCT()
struct FORTNITEGAME_API FCharmSlotMetadata
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	EFortCustomPartType                                AttachToPart;     
    
	UPROPERTY(EditAnywhere)
	bool                                               WeaponCharm;
	
	UPROPERTY(EditAnywhere)
	bool                                               BackPresentedCharm;
	
	//Missed Offset
	
	UPROPERTY(EditAnywhere)
	FName                                       AttachSocket;
	
	//Missed Offset
	
	UPROPERTY(EditAnywhere)
	FGameplayTagQuery                           MatchCriteria;
	
	UPROPERTY(EditAnywhere)
	TArray<FCharmPreviewEntry>                  PreviewList;
	
};
