// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaBackpackItemDefinition.h"
#include "FortUICameraFrameTargetBounds.h"
#include "AthenaPetItemDefinition.h"
#include "AthenaPetCarrierItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaPetCarrierItemDefinition : public UAthenaBackpackItemDefinition
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FFortUICameraFrameTargetBounds   CameraFramingBounds;
	
	UPROPERTY(EditAnywhere)
	UAthenaPetItemDefinition*        DefaultPet;
	

 
};
