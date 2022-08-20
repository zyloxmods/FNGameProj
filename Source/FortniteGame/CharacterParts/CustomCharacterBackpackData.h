// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomCharacterAccessoryData.h"
#include "CustomCharacterBackpackData.generated.h"

UCLASS()
class FORTNITEGAME_API UCustomCharacterBackpackData : public UCustomCharacterPartData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName LootSocketName;
};
