// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../ItemDef/FortAccountItemDefinition.h"
#include "../Enum/EItemProfileType.h"
#include "FortTokenType.generated.h"

UCLASS()
class FORTNITEGAME_API UFortTokenType : public UFortAccountItemDefinition
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath ScriptedAction;
	
	UPROPERTY(EditAnywhere)
	FSlateColor NodeTintColour;
	
	UPROPERTY(EditAnywhere)
	bool bPercentageRepresentation;
	
	
	UPROPERTY(EditAnywhere)
	EItemProfileType ProfileType;
	
	//Missed Offset
	
	UPROPERTY(EditAnywhere)
	FSoftClassPath ItemPreviewActorClass;
	
};
