// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomCharacterPart.h"
#include "CustomAccessoryColorSwatch.h"
#include "CustomCharacterBodyPartData.generated.h"


UCLASS(BlueprintType)
class FORTNITEGAME_API UCustomCharacterBodyPartData : public UCustomCharacterPartData
{
	GENERATED_BODY()
	
public:


	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<UAnimInstance> AnimClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimMontage> FrontEndAnimClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSoftClassPtr<UAnimInstance>  MannequinAnimClass;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UCustomAccessoryColorSwatch> AccessoryColors;

};
