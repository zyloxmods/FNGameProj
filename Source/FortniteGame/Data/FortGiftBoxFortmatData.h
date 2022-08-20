// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortGiftBoxFortmatData.generated.h"

/**
 * 
 */
USTRUCT()
struct FORTNITEGAME_API FFortGiftBoxFortmatData
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	FString StringAssetType;
	
	UPROPERTY(EditAnywhere)
	FString StringData;
};
