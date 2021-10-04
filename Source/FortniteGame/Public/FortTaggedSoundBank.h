// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FTaggedSoundBankResponseList.h"
#include "FortTaggedSoundBank.generated.h"

UCLASS()
class FORTNITEGAME_API UFortTaggedSoundBank : public UDataAsset
{
	GENERATED_BODY()
	
public:
		UPROPERTY(EditAnywhere)
	TMap<FGameplayTag, FTaggedSoundBankResponseList> FlattenedResponseMap;
};
