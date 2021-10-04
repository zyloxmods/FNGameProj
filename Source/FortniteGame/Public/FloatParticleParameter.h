// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FloatParticleParameter.generated.h"


USTRUCT()
struct FFloatParticleParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector                     Value;
	
	UPROPERTY(EditAnywhere)
	FName                       ParameterName;
	
};
