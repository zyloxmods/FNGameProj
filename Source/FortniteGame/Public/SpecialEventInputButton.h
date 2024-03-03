#pragma once
#include "CoreMinimal.h"
#include "SpecialEventInputButton.generated.h"

UENUM(BlueprintType)
enum class SpecialEventInputButton : uint8 {
    PrimaryFire,
    SecondaryFire,
    RollLeft,
    RollRight,
};

