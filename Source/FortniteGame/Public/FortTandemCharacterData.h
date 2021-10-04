// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "FortTandemCharacterData.generated.h"

UCLASS()
class FORTNITEGAME_API UFortTandemCharacterData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameplayTag;

	UPROPERTY(EditAnywhere)
	FGameplayTagContainer POILocations;

	UPROPERTY(EditAnywhere)
	TArray<FText> POITextOverrides;

	UPROPERTY(EditAnywhere)
	FText DisplayName;
	
	UPROPERTY(EditAnywhere)
	FText GeneralDescription;

	UPROPERTY(EditAnywhere)
	FText AdditionalDescription;

	UPROPERTY(EditAnywhere)
	FText BehaviorDescription;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> ToastIcon;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> EntryListIcon;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D> SidePanelIcon;
};
