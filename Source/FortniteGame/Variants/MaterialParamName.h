// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialParamName.generated.h"


USTRUCT()
struct FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FName ParamName;
};