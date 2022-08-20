// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomPartMaterialOverrideData.generated.h"

/**
 *
 */
USTRUCT()
struct FCustomPartMaterialOverrideData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere)
		int MaterialOverrideIndex;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};
