// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "McpVariantChannelInfo.h"
#include "FortCosmeticVariantPreviewElement.h"
#include "FortCosmeticVariantPreview.generated.h"

USTRUCT(BlueprintType)
struct FortCosmeticVariantPreview
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FText UnlockCondition;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    float PreviewTime;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<FMcpVariantChannelInfo> VariantOptions;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    TArray<FFortCosmeticVariantPreviewElement> AdditionalItems; 
};