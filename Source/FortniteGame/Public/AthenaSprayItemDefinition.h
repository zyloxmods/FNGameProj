// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaDanceItemDefinition.h"
#include "AthenaSprayItemDefinition.generated.h"

UCLASS()
class FORTNITEGAME_API UAthenaSprayItemDefinition : public UAthenaDanceItemDefinition
{
	GENERATED_BODY()

public:

    UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UMaterialInterface>          DecalMaterial;

    UPROPERTY(EditAnywhere)
	FName                                        ProgressiveCosmeticStatName;

    UPROPERTY(EditAnywhere)
	bool                                         bUseBannerAsTexture;
	
	//missed offset
	
    UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UTexture2D>                   DecalTexture;
};


