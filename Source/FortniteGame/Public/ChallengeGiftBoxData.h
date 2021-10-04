// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortGiftBoxFortmatData.h"
#include "ChallengeGiftBoxData.generated.h"

USTRUCT()
struct FORTNITEGAME_API FChallengeGiftBoxData
{
	GENERATED_BODY()
	
public:

    UPROPERTY(EditAnywhere)
	FSoftObjectPath                                    GiftBoxToUse;
	
    UPROPERTY(EditAnywhere)
	TArray<FFortGiftBoxFortmatData>                    GiftBoxFormatData;

};
