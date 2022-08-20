// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharmPreviewEntry.generated.h"

USTRUCT()
struct FORTNITEGAME_API FCharmPreviewEntry
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	FSoftObjectPath                  PreviewObject;
	
	//Missed Offset
	
	UPROPERTY(EditAnywhere)
	FTransform                       PreviewTransform;
	
	UPROPERTY(EditAnywhere)
	bool                             bPreviewUsingVehicleShader;
	
	//Missed Offset
};
