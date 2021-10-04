// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "FortItemAccessTokenType.h"
#include "FMontageItemAccessData.generated.h"

USTRUCT()
struct  FMontageItemAccessData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTag AccessTag;      

	UPROPERTY(EditAnywhere)
	UFortItemAccessTokenType* AccessToken;
};
