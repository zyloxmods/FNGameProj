// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "Items/FortItemDefinition.h"
#include "FortniteGame/FortniteGame.h"
#include "FortItemAccessTokenType.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortItemAccessTokenType : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	EItemProfileType ProfileType; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	UFortItemDefinition* access_item; 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText UnlockDescription;	
};
