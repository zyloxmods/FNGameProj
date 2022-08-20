// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticMaterialOverride.generated.h"

USTRUCT(BlueprintType)
struct FAthenaCosmeticMaterialOverride
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FName ComponentName;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    int MaterialOverrideIndex;
};