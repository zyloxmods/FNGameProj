// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Athena/Items/AthenaCharacterPartItemDefinition.h"
#include "AthenaBackpackItemDefinition.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UAthenaBackpackItemDefinition : public UAthenaCharacterPartItemDefinition
{
	GENERATED_BODY()

public:
	virtual FPrimaryAssetId GetPrimaryAssetId() const override
	{
		return FPrimaryAssetId("AthenaBackpack", GetFName());
	}
};
