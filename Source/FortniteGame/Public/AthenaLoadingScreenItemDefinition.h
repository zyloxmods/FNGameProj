// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaLoadingScreenItemDefinition.generated.h"

UCLASS(BlueprintType)
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