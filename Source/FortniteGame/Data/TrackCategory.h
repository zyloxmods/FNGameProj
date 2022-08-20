// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TrackCategory.generated.h"

/**
 * 
 */
USTRUCT()
struct  FTrackCategory
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UObject> CategoryIcon;

	UPROPERTY(EditAnywhere)
	FText CategoryName;

	UPROPERTY(EditAnywhere)
	int CategoryStartingLevel; 
};
