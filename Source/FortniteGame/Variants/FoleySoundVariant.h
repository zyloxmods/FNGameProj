// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FoleySoundVariant.generated.h"


USTRUCT()
struct FFoleySoundVariant
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<UObject*> LibrariesToAdd;

	UPROPERTY(EditAnywhere)
	TArray<UObject*> LibrariesToRemove;
	
};
