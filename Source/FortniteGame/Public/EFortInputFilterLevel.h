#pragma once
#include "CoreMinimal.h"
#include "EFortInputFilterLevel.generated.h"

UENUM(BlueprintType)
enum class EFortInputFilterLevel : uint8 {
    None,
    Touch,
    Gamepad,
    Mouse,
};

