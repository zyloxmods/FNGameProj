// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VectorParticleParameter.generated.h"


USTRUCT()
struct FVectorParticleParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector                     Value;
	
	UPROPERTY(EditAnywhere)
	FName                       ParameterName;
	
};
