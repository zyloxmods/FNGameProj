// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomAccessoryHatReactiveMorphs.generated.h"


USTRUCT()
struct FCustomAccessoryHatReactiveMorphs
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	TArray<FName> CapMorphTargets; 

	UPROPERTY(EditAnywhere)
	TArray<FName> HelmetMorphTargets;

	UPROPERTY(EditAnywhere)
	TArray<FName> MaskMorphTargets;

	UPROPERTY(EditAnywhere)
	TArray<FName> HatMorphTargets;

};
