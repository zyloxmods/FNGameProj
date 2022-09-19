// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaMusicPackItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaMusicPackItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (AssetBundles = "Equipped"))
		TSoftObjectPtr<USoundBase> FrontEndLobbyMusic;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D> CoverArtImage;

	UPROPERTY(EditAnywhere)
		bool bIsDefaultMusicPack;

	UPROPERTY(EditAnywhere)
		float MusicPreviewStartTime;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaMusicPack", GetFName());
	}
};
