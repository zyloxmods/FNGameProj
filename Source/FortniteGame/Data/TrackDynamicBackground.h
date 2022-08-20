// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TrackDynamicBackground.generated.h"

USTRUCT()
struct FTrackDynamicBackground
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> BackgroundSubstance; 

	UPROPERTY(EditAnywhere)
	FLinearColor PrimaryColor; 

	UPROPERTY(EditAnywhere)
	FLinearColor SecondaryColor; 

	UPROPERTY(EditAnywhere)
	FLinearColor TertiaryColor; 

	UPROPERTY(EditAnywhere)
	bool bIsSpecial; 

	UPROPERTY(EditAnywhere)
	bool bIsFoil;

	UPROPERTY(EditAnywhere)
	int MinimalDiscoveryLevel;
};
