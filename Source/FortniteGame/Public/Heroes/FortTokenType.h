// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Items/FortAccountItemDefinition.h"
#include "Styling/SlateColor.h"
#include "FortniteGame/FortniteGame.h"
#include "FortTokenType.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortTokenType : public UFortAccountItemDefinition
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	class UClass* ScriptedAction; 

	UPROPERTY(EditAnywhere)
	 FSlateColor NodeTintColour; 

	UPROPERTY(EditAnywhere)
	bool bPercentageRepresentation;

	UPROPERTY(EditAnywhere)
	EItemProfileType ProfileType;

	UPROPERTY(EditAnywhere)
		class UClass* ItemPreviewActorClass; 
};
