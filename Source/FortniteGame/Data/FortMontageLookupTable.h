// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Data/MontageLookupData.h"
#include "FortMontageLookupTable.generated.h"

UCLASS()
class UFortMontageLookupTable : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMontageLookupData> MontageLookupDataArray;
};