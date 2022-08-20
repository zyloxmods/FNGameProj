

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialParamName.h"
#include "VectorParamVariant.generated.h"


USTRUCT()
struct FVectorParamVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FVector Value;
};
