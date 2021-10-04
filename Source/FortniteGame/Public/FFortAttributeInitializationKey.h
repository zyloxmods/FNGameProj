// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FFortAttributeInitializationKey.generated.h"

USTRUCT()
struct FFortAttributeInitializationKey
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	FName AttributeInitCategory;  

	UPROPERTY(EditAnywhere)
	FName AttributeInitSubCategory;
};
