// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "FortHarvestingToolMontageOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FFortHarvestingToolMontageOverrideData
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere)
    FGameplayTag                                CosmeticTag;
	
	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UAnimMontage>                MontageToPlay;
};