// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "CustomCharacterPart.h"
#include "AthenaCharacterPartItemDefinition.generated.h"

UCLASS(BlueprintType)
class FORTNITEGAME_API UAthenaCharacterPartItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<UCustomCharacterPart*> CharacterParts;
};