// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaItemWrapDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaItemWrapDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()

public:


	UPROPERTY(EditAnywhere)
		FSoftClassPath                           ItemWrapModifierBlueprint;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UMaterialInstance>        ItemWrapMaterial;



};
