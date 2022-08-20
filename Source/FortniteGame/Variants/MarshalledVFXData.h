// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "../Enum/EFXType.h"
#include "MarshalledVFXData.generated.h"

/**
 * 
 */
USTRUCT()
struct FMarshalledVFXData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer ParameterGroups;         

	UPROPERTY(EditAnywhere)
	EFXType Type;           

   

	UPROPERTY(EditAnywhere)
	FName AttachAtBone;           

	UPROPERTY(EditAnywhere)
	FTransform RelativeOffset;     

	UPROPERTY(EditAnywhere)
	FGameplayTag EffectIdTag;       

	UPROPERTY(EditAnywhere)
	bool bAutoActivate;                                   
};
