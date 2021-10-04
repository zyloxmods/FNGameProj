// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FMaterialVariants.h"
#include "FBaseVariantDef.h"
#include "FMaterialVariantDef.generated.h"

/**
 * 
 */
USTRUCT()
struct FMaterialVariantDef : public FBaseVariantDef
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMaterialVariants> VariantMaterials;

};