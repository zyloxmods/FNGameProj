// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EFortCustomBodyType.h"
#include "EFortCustomGender.h"
#include "FFortEmoteMapping.generated.h"

USTRUCT(BlueprintType)
struct FFortEmoteMapping
{
    GENERATED_USTRUCT_BODY()

public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<Body::EFortCustomBodyType> BodyType;

    UPROPERTY(EditAnywhere)
    TEnumAsByte<Enums::EFortCustomGender> Gender;
};