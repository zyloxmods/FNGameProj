// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDef/FortItemDefinition.h" 
#include "McpVariantChannelInfo.h"
#include "../ItemDef/FortAccountItemDefinition.h" 
#include "FortCosmeticVariantPreviewElement.generated.h"

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