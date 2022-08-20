// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
//#include "GameplayAttribute.h"
#include "HeroSpecializationAttributeRequirement.generated.h"


USTRUCT()
struct FHeroSpecializationAttributeRequirement
{
	GENERATED_BODY()

public:

	//UPROPERTY(EditAnywhere)
	//GameplayAttribute Attribute;    

	UPROPERTY(EditAnywhere)
	float MinimumValue;
	

};
