// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortGameplayAttributeData.generated.h"

/**
 * 
 */
USTRUCT()
struct FORTNITEGAME_API FFortGameplayAttributeData : public FGameplayAttributeData
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
		float Minimum;

	UPROPERTY(EditAnywhere)
		float Maximum;

	UPROPERTY(EditAnywhere)
		bool bIsCurrentClamped;

	UPROPERTY(EditAnywhere)
		bool bIsBaseClamped;

	UPROPERTY(EditAnywhere)
		bool bShouldClampBase;

	UPROPERTY(EditAnywhere)
		float UnclampedBaseValue;

	UPROPERTY(EditAnywhere)
		float UnclampedCurrentValue;
};
