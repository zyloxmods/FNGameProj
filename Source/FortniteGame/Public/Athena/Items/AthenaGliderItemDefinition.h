// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCosmeticItemDefinition.h"
#include "AthenaGliderItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaGliderItemDefinition : public UAthenaCosmeticItemDefinition
{
	GENERATED_BODY()
	
public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaItemWrap", GetFName());
	}
};
