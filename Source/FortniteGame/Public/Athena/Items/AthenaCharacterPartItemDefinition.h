// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "Customization/CustomCharacterPart.h"
#include "AthenaCharacterPartItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaCharacterPartItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	
public:

	UPROPERTY(EditAnywhere)
		TArray<UCustomCharacterPart*> CharacterParts;
};
