// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomPartScalarParameter.generated.h"

USTRUCT()
struct FCustomPartScalarParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForScalarParameter;

	UPROPERTY(EditAnywhere)
		FName ScalarParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		float ScalarOverride;
};