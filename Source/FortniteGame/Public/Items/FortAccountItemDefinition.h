// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortPersistableItemDefinition.h"
#include "Engine/CurveTable.h"

#include "FortAccountItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class FORTNITEGAME_API UFortAccountItemDefinition : public UFortPersistableItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FCurveTableRowHandle LevelToXpHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FCurveTableRowHandle LevelToSacrificeXpHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FDataTableRowHandle SacrificeRecipe;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FDataTableRowHandle TransmogSacrificeRow;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		TArray<FDataTableRowHandle> ConversionRecipes;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FDataTableRowHandle UpgradeRarityRecipeHandle;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 MinLevel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		int32 MaxLevel;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString GrantToProfileType;
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortChallengeBundleItemDefinition : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:
	// To do 
};