// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaLoadingScreenItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaLoadingScreenItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UTexture2D>        BackgroundImage;

	UPROPERTY(EditAnywhere)
		FSoftObjectPath                   BackgroundMaterialOrTexture;

	UPROPERTY(EditAnywhere)
		FSoftClassPath                    BackgroundWidget;

	UPROPERTY(EditAnywhere)
		FVector2D                         BackgroundDesiredSize;

	UPROPERTY(EditAnywhere)
		FLinearColor                      BackgroundColor;
};
