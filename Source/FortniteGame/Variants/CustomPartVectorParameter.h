// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomPartVectorParameter.generated.h"

USTRUCT()
struct FCustomPartVectorParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForVectorParameter;

	UPROPERTY(EditAnywhere)
		FName VectorParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		FLinearColor VectorOverride;

};