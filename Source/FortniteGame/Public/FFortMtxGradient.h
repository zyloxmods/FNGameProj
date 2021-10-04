// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FFortMtxGradient.generated.h"

USTRUCT(BlueprintType)
struct FFortMtxGradient
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Start;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Stop;
};