// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "../FortniteGame.h"
#include "FortBannerTokenType.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortBannerTokenType : public UFortAccountItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	EItemProfileType ProfileType; 

	UPROPERTY(EditAnywhere)
	FString BannerIconTemplateName; 

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("BannerToken", GetFName());
	}
};

