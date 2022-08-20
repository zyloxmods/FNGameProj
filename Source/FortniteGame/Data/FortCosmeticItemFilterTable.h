// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "FortCosmeticItemFilterTable.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortCosmeticItemFilterTable : public UDataAsset
{
	GENERATED_BODY()
	
public:
    
	UPROPERTY(EditAnywhere)
	TArray<UDataTable*>  FilterTagTables;
	
};
