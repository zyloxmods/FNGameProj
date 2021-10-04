// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortItemDefinition.h"
#include "FMcpVariantChannelInfo.h"
#include "FortAccountItemDefinition.h"
#include "FFortCosmeticVariantPreviewElement.generated.h"

USTRUCT(BlueprintType)
struct FFortCosmeticVariantPreviewElement
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<FMcpVariantChannelInfo> VariantOptions;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UFortAccountItemDefinition* Item;
};