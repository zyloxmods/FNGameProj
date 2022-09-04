// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "FortniteGame/FortniteGame.h"
#include "FortniteGame/Public/Heroes/FortHeroType.h"
#include "AthenaCharacterItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TMap<FName, UObject*> RequestedDataStores;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UFortHeroType* HeroDefinition;

	//UPROPERTY(EditAnywhere)
		//UAthenaBackpackItemDefinition* DefaultBackpack;

	UPROPERTY(EditAnywhere)
		TArray<UAthenaCosmeticItemDefinition*> RequiredCosmeticItems;

	UPROPERTY(EditAnywhere)
		EFortCustomGender Gender;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath FeedbackBank;

	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaCharacter", GetFName());
	}
};
