// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "FortMontageLookupTable.generated.h"


USTRUCT(BlueprintType)
struct FMontageLookupData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FGameplayTagContainer GameplayTags;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> AnimMontage;

};

UCLASS()
class FORTNITEGAME_API UFortMontageLookupTable : public UDataAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		TArray<FMontageLookupData> MontageLookupDataArray;
};
