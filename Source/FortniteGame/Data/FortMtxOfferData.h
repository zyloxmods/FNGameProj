// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Data/FortMtxGradient.h"
#include "UObject/PrimaryAssetId.h"
#include "Styling/SlateBrush.h"
#include "FortMtxOfferData.generated.h"

USTRUCT()
struct FFortItemQuantityPair
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FPrimaryAssetId ItemPrimaryAssetId;

	UPROPERTY(EditAnywhere)
	int Quantity;
};

USTRUCT()
struct FFortMtxDetailsAttribute
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Value;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortMtxOfferData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	FText ShortDisplayName;

	UPROPERTY(EditAnywhere, meta = (MultiLine = "true"))
	FText ShortDescription;

	UPROPERTY(EditAnywhere, meta = (MultiLine = "true"))
	FText SubTitleText;

	UPROPERTY(EditAnywhere, meta = (MultiLine = "true"))
	FText DisclaimerText;

	UPROPERTY(EditAnywhere)
	TArray<FFortItemQuantityPair> GrantOverride;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush TileImage;

	UPROPERTY(EditAnywhere)
	FSlateBrush BadgeImage;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FSlateBrush DetailsImage;

	UPROPERTY(EditAnywhere)
	TArray<FFortMtxDetailsAttribute> DetailsAttributes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FFortMtxGradient Gradient;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FLinearColor Background;

	UPROPERTY(EditAnywhere)
	FSlateBrush BackgroundImage;

	UPROPERTY()
	FLinearColor UpsellPrimaryColor;
};