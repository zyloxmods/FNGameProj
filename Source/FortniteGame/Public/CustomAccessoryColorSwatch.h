// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CustomDynamicColorSwatch.h"
#include "CustomAccessoryColorSwatch.generated.h"


UCLASS()
class  UCustomAccessoryColorSwatch : public UCustomDynamicColorSwatch
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FLinearColor AccessoryColors;

};

