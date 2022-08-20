
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "ScriptedActionVariant.generated.h"

/**
 *
 */
USTRUCT()
struct FScriptedActionVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag ActionTag;    
	/*
	UPROPERTY(EditAnywhere)
	unsigned char                                      UnknownData00[0x4];                                    
	*/
};