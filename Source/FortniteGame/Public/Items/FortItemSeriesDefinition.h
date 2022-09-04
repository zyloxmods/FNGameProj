// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortniteGame/FortniteGame.h"
#include "FortItemSeriesDefinition.generated.h"



USTRUCT(BlueprintType)
struct FFortColorPalette
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FLinearColor Color1;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FLinearColor Color2;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FLinearColor Color3;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FLinearColor Color4;

    UPROPERTY(EditAnywhere, BlueprintReadOnly)
        FLinearColor Color5;
};

UCLASS(BlueprintType)
class UFortItemSeriesDefinition : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "DisplayName")
		FText DisplayName;

	UPROPERTY(EditAnywhere)
		FFortColorPalette Colors;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> BackgroundTexture;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> ItemCardMaterial;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInterface> BackgroundMaterial;

};
