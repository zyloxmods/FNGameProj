// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "VectorParamVariant.h"
#include "MaterialVectorVariant.h"
#include "MaterialFloatVariant.h"
#include "ParticleParamterVariant.generated.h"


USTRUCT()
struct FParticleParamterVariant
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TArray<FMaterialVectorVariant> ColorParams;                                    

	UPROPERTY(EditAnywhere)
	TArray<FVectorParamVariant>  VectorParams;     

		UPROPERTY(EditAnywhere)
	TArray<FMaterialFloatVariant> FloatParams;                                      
};
