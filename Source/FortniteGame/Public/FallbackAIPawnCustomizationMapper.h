// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTags.h"
#include "CustomCharacterPart.h"
#include "FallbackAIPawnCustomizationMapper.generated.h"

/**
 * 
 */
USTRUCT()
struct FORTNITEGAME_API FFallbackAIPawnCustomizationMapper
{
	GENERATED_BODY()
	
public:

    UPROPERTY(EditAnywhere)
	FGameplayTag                                         RequiredTag;
	
	UPROPERTY(EditAnywhere)
	FSoftObjectPath                                      CustomizationFallback;
};
