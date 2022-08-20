// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "FortTaggedSoundCue.generated.h"

/**
 * 
 */
USTRUCT()
struct FFortTaggedSoundCue 
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
	FGameplayTagQuery Requirements;                                    

	UPROPERTY(EditAnywhere)
	USoundBase* Sound;
};
