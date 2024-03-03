#pragma once
#include "CoreMinimal.h"
#include "EFortGamepadLookInputCurve.generated.h"

UENUM(BlueprintType)
enum class EFortGamepadLookInputCurve : uint8 {
    Linear,
    Exponential,
};

