// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortPersistableItemDefinition.h"
#include "AttributeSet.h"
#include "Items/FortAccountItemDefinition.h"
#include "FortMedalsPunchCardItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortMedalsPunchCardItemDefinition : public UFortPersistableItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		int NumPunches;

	UPROPERTY(EditAnywhere)
		bool bAllowMedalReplacement;

	UPROPERTY(EditAnywhere)
		FScalableFloat PunchCardXpRewards;

	UPROPERTY(EditAnywhere)
		FScalableFloat PunchCardRestXp;

};

UCLASS(BlueprintType)
class UFortRepeatableDailiesCardItemDefinition : public UFortAccountItemDefinition
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FString GranterQuestPack;

	UPROPERTY(EditAnywhere)
		int FillCount;

	UPROPERTY(EditAnywhere)
		FScalableFloat ReplacedRestedXpValue;

	UPROPERTY(EditAnywhere)
		FScalableFloat ReducedXPReward;

	UPROPERTY(EditAnywhere)
		FScalableFloat ReplacedRestedXpValueScalarForMissedDays;

	//UPROPERTY(EditAnywhere)
		//TSoftObjectPtr<UFortAthenaRewardEventGraphPurchaseToken> RequiredItemDef;

//	UPROPERTY(EditAnywhere)
	//	TArray<FRepeatableDailiesCardDateOverride> DateOverrides;

};