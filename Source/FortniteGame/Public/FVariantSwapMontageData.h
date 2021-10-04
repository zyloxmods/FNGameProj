// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "FVariantSwapMontageData.generated.h"

USTRUCT()
struct  FVariantSwapMontageData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	FGameplayTag VariantMetaTagRequired;  

	UPROPERTY(EditAnywhere)
	FName MontageSectionName;
};
