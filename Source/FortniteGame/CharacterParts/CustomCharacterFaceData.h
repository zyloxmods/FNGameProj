// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "../Enum/EFortCustomPartType.h"
#include "CustomCharacterAccessoryData.h"
#include "CustomAccessoryHatReactiveMorphs.h"
#include "CustomCharacterFaceData.generated.h"

UCLASS()
class FORTNITEGAME_API UCustomCharacterFaceData : public UCustomCharacterAccessoryData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	EFortCustomPartType PartAttachedToOverride;                           

	UPROPERTY(EditAnywhere)
	FCustomAccessoryHatReactiveMorphs HatMorphData;
};
