// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialVariants.h"
#include "BaseVariantDef.h"
#include "MaterialVariantDef.generated.h"

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