#pragma once
#include "CoreMinimal.h"
#include "EFortCrucibleControlType.generated.h"

UENUM(BlueprintType)
enum class EFortCrucibleControlType : uint8 {
    Gamepad,
    KBM,
    Touch,
    Count,
};

