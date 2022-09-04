// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "FortniteGame/FortniteGame.h"
#include "Engine/DataAsset.h"
#include "FortRarityData.generated.h"

/* Taken from https://github.com/SizzyFNBR/FortniteEditor */

USTRUCT(BlueprintType)
struct FFortRarityItemData
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText                                       Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FLinearColor                                Color1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FLinearColor                                Color2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FLinearColor                                Color3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FLinearColor                                Color4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FLinearColor                                Color5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Falloff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Brightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Roughness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              Glow;
};

/**
 *
 */
UCLASS()
class FORTNITEGAME_API UFortRarityData : public UDataAsset
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintPure)
		static struct FFortRarityItemData BPGetRarityData(EFortRarity Rarity)
	{
		return FFortRarityItemData();
	};

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FFortRarityItemData> RarityCollection;
};