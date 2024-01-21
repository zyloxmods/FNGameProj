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

public:
	FFortRarityItemData() = default;

	UPROPERTY(EditAnywhere, BlueprintReadWrite);
		FText                                       Name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		struct FLinearColor                                Color1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		struct FLinearColor                                Color2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		struct FLinearColor                                Color3;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		struct FLinearColor                                Color4;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		struct FLinearColor                                Color5;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		float                                              Radius;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		float                                              Falloff;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		float                                              Brightness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		float                                              Roughness;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (IgnoreForMemberInitializationTest))
		float                                              Glow;
};

/**
 *
 */
UCLASS(BlueprintType)
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