// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MaterialParamName.h"
#include "MaterialVectorVariant.generated.h"


USTRUCT()
struct FMaterialVectorVariant : public FMaterialParamName
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
		FLinearColor Value;
};
