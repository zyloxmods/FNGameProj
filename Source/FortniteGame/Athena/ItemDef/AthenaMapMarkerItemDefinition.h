// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaMapMarkerItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaMapMarkerItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	FSoftClassPath TopperActorClass;
};