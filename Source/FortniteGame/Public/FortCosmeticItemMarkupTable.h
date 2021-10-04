// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataAsset.h"
#include "FortCosmeticItemMarkupTable.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortCosmeticItemMarkupTable : public UDataAsset
{
	GENERATED_BODY()
	
public:
    
	UPROPERTY(EditAnywhere)
	TArray<UDataTable*>  SetDescriptions;
	
	UPROPERTY(EditAnywhere)
	TArray<UDataTable*>  MarkupTagDescriptions;
	
};

