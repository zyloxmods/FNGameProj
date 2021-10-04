// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EFortCustomPartType.generated.h"


UENUM()
enum class EFortCustomPartType
{
    Head = 0,
    Body = 1,
    Hat = 2,
    Backpack = 3,
    MiscOrTrail = 4,
    Face = 5,
    Gameplay = 6,
    NumTypes = 7,
    EFortCustomPartType_MAX = 8,
};