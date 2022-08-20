// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../ItemDef/FortItemDefinition.h"
#include "../Enum/EMontageVisibilityRule.h"
#include "MontageVisibilityData.generated.h"

USTRUCT()
struct  FMontageVisibilityData
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
    EMontageVisibilityRule Rule;                                             

	UPROPERTY(EditAnywhere)
	UFortItemDefinition* Item;
};
