// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FFortColorPalette.generated.h"

USTRUCT(BlueprintType)
struct FFortColorPalette
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Color1;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Color2;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Color3;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Color4;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FLinearColor Color5;
};