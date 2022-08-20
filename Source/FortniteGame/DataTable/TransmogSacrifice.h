// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TransmogSacrifice.generated.h"

USTRUCT()
struct FORTNITEGAME_API FTransmogSacrifice : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		int TransmogSacrificePoints;
};