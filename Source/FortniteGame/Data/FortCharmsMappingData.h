// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTags.h"
#include "../Data/CharmSoundAssetEntry.h"
#include "../Structs/CharmSlotMetadata.h"
#include "FortCharmsMappingData.generated.h"


UCLASS()
class FORTNITEGAME_API UFortCharmsMappingData : public UDataAsset
{
	GENERATED_BODY()
	
public:
    
	UPROPERTY(EditAnywhere)
	TArray<FCharmSlotMetadata>       SlotMetadata;
	
	UPROPERTY(EditAnywhere)
	TArray<FCharmPreviewEntry>       NonSlotPreviewList;
	
	UPROPERTY(EditAnywhere)
	FGameplayTag                     DoNotApplyCharmsTag;
	
};
