// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "CosmeticMetaTagContainer.generated.h"


USTRUCT()
struct FCosmeticMetaTagContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTagContainer MetaTagsToApply;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer MetaTagsToRemove;
};