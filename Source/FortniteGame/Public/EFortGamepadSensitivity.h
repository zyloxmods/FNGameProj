#pragma once
#include "CoreMinimal.h"
#include "EFortGamepadSensitivity.generated.h"

UENUM(BlueprintType)
enum class EFortGamepadSensitivity : uint8 {
    Invalid,
    Slow,
    SlowPlus,
    SlowPlusPlus,
    Normal,
    NormalPlus,
    NormalPlusPlus,
    Fast,
    FastPlus,
    FastPlusPlus,
    Insane,
    MAX,
};

