#pragma once
#include "CoreMinimal.h"
#include "EFortSoundIndicatorTypes.generated.h"

UENUM(BlueprintType)
enum class EFortSoundIndicatorTypes : uint8 {
    Generic,
    FootStep,
    Gunshot,
    Chest,
    Glider,
    Vehicle,
    COUNT,
};

