// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Data/FortColorPalette.h"
#include "FortItemSeriesDefinition.generated.h"

UCLASS(BlueprintType)
class UFortItemSeriesDefinition : public UPrimaryDataAsset 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category="DisplayName")
		FText DisplayName; 

	UPROPERTY(EditAnywhere)
		FFortColorPalette Colors; 

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> BackgroundTexture; 

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> ItemCardMaterial; 

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> BackgroundMaterial; 

};
