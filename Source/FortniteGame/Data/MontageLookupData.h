// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "MontageLookupData.generated.h"

USTRUCT()
struct FMontageLookupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer GameplayTags;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> AnimMontage;

};

