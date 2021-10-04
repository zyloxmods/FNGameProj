// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FortUICameraFrameTargetBounds.generated.h"

USTRUCT()
struct FFortUICameraFrameTargetBounds
{
	GENERATED_BODY()
	
public:

    UPROPERTY(EditAnywhere)
	FVector                    Origin;
	
	UPROPERTY(EditAnywhere)
	float                      CylinderHalfHeight;
	
	UPROPERTY(EditAnywhere)
	float                      CylinderRadius;
};