// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//#include "FortQuestItemDefinition.h"
#include "RepeatableDailiesCardDateOverride.generated.h"


USTRUCT()
struct  FRepeatableDailiesCardDateOverride
{
	GENERATED_BODY()

public:
	
		UPROPERTY(EditAnywhere)
			TSoftObjectPtr<UObject> Quest;

		//UPROPERTY(EditAnywhere)
			//TSoftObjectPtr<UFortQuestItemDefinition> Quest;

	UPROPERTY(EditAnywhere)
	FDateTime Start;

	UPROPERTY(EditAnywhere)
	FDateTime End;
};
