// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDef/FortItemDefinition.h"
#include "McpVariantChannelInfo.generated.h"

USTRUCT(BlueprintType)
struct FMcpVariantChannelInfo
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FGameplayTagContainer OwnedVariantTags;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
    UFortItemDefinition* ItemVariantIsUsedFor;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
    FString CustomData;
};