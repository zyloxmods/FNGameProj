// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortHarvestingToolMontageOverrideData.h"
#include "FortHarvestingToolMontageOverrides.generated.h"

USTRUCT(BlueprintType)
struct FFortHarvestingToolMontageOverrides
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<FFortHarvestingToolMontageOverrideData>   MontageOverrideData;
};