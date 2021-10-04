// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FCustomPartTextureParameter.generated.h"

USTRUCT()
struct FCustomPartTextureParameter
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		int MaterialIndexForTextureParameter;

	UPROPERTY(EditAnywhere)
		FName TextureParameterNameForMaterial;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture> TextureOverride;
};
