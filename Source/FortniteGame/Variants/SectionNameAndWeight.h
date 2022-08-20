// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SectionNameAndWeight.generated.h"

USTRUCT()
struct  FSectionNameAndWeight 
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	FName SectionName;  

	UPROPERTY(EditAnywhere)
	float SectionWeight;
};
