// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FParameterNameMapping.generated.h"

USTRUCT()
struct FParameterNameMapping
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName CascadeName;

	UPROPERTY(EditAnywhere)
	FName NiagaraName;   

};
