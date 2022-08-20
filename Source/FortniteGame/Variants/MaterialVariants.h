// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialVariants.generated.h"


USTRUCT()
struct FMaterialVariants
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> MaterialToSwap;

	UPROPERTY(EditAnywhere)
		FName ComponentToOverride;

	UPROPERTY(EditAnywhere)
		FName CascadeMaterialName;

	UPROPERTY(EditAnywhere)
		int MaterialOverrideIndex;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> OverrideMaterial;
};
