// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomCharacterAccessoryData.h"
#include "../Enum/EFortCustomPartType.h"
#include "CustomCharacterCharmData.generated.h"


UCLASS()
class FORTNITEGAME_API UCustomCharacterCharmData : public UCustomCharacterAccessoryData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	EFortCustomPartType  PartAttachedToOverride;

};
