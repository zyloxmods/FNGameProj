// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaDanceItemDefinition.h"
#include "AthenaSprayItemDefinition.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
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
