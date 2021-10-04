// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FParticleVariant.generated.h"


USTRUCT()
struct FParticleVariant
{
	GENERATED_BODY()

public:                     

	UPROPERTY(EditAnywhere)
	FName ComponentToOverride;                             
                     
};
