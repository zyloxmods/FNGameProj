// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "FortniteGame/FortniteGame.h"
#include "FortGiftBoxItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class UFortGiftBoxItemDefinition : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		ESubGame RestrictToSubgame;

	UPROPERTY(EditAnywhere)
		EFortGiftWrapType GiftWrapType;

	UPROPERTY(EditAnywhere)
		FText ViolatorText;

	UPROPERTY(EditAnywhere)
		FText DefaultHeaderText;

	UPROPERTY(EditAnywhere)
		FText SubHeaderText;

	UPROPERTY(EditAnywhere)
		FText DefaultBodyText;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UObject> ItemDisplayAsset;

	UPROPERTY(EditAnywhere)
		int SortPriority;

	UPROPERTY(EditAnywhere)
		bool bReuseExistingBoxIfPossible;

	UPROPERTY(EditAnywhere)
		bool bOverrideBackgroundMessage;

	UPROPERTY(EditAnywhere)
		FText BackgroundMessageText;

	UPROPERTY(EditAnywhere)
		FSoftClassPath GiftBoxPreMessageWidgetRef;

	UPROPERTY(EditAnywhere)
		FSoftClassPath GiftBoxHeaderSubWidgetRef;

	UPROPERTY(EditAnywhere)
		FSoftClassPath CustomLeftsideContent;
};