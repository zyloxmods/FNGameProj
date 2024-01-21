#pragma once
#include "CoreMinimal.h"
#include "EFortInputDevice.generated.h"

UENUM(BlueprintType)
enum class EFortInputDevice : uint8 {
    Mouse,
    Keyboard,
    Gamepad,
    Touch,
};

