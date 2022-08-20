// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortShopOfferDisplayData.generated.h"

UCLASS()
class FORTNITEGAME_API UFortShopOfferDisplayData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		TArray<UMaterialInterface*> Presentations;
};
