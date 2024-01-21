#pragma once
#include "CoreMinimal.h"
#include "EColorBlindMode.generated.h"

UENUM(BlueprintType)
enum class EColorBlindMode : uint8 {
    Off,
    Deuteranope,
    Protanope,
    Tritanope,
};

