// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Enum/EFortCustomBodyType.h" 
#include "../Enum/EFortCustomGender.h"
#include "FortEmoteMapping.generated.h"

USTRUCT(BlueprintType)
struct FFortEmoteMapping
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere)
    EFortCustomBodyType BodyType;

    UPROPERTY(EditAnywhere)
    EFortCustomGender Gender;
};