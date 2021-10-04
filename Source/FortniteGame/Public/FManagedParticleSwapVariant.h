// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FFortPortableSoftParticles.h"
#include "FManagedParticleSwapVariant.generated.h"


USTRUCT()
struct FManagedParticleSwapVariant
{
	GENERATED_BODY()

public:
	/*
	UPROPERTY(EditAnywhere)
	FGameplayTag  ParamGroupTag;                                           
	*/
	UPROPERTY(EditAnywhere)
	FFortPortableSoftParticles ParticleToOverride;                                      
	/*
	UPROPERTY(EditAnywhere)
		unsigned char                                      UnknownData00[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
*/
};
