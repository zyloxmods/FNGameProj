// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../../Enum/EFortCustomGender.h"
#include "AthenaBackpackItemDefinition.h"
#include "AthenaCosmeticItemDefinition.h"
#include "../../Hero/FortHeroType.h"
#include "Misc/IFilter.h"
#include "AthenaCharacterItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaCharacterItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TMap<FName, UObject*> RequestedDataStores;

	UPROPERTY(EditAnywhere)
	class UFortHeroType* HeroDefinition;

	UPROPERTY(EditAnywhere)
	UAthenaBackpackItemDefinition* DefaultBackpack;

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