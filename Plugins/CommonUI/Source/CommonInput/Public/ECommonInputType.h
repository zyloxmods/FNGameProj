#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.generated.h"

UENUM(BlueprintType)
enum class ECommonInputType : uint8 {
    MouseAndKeyboard,
    Gamepad,
    Touch,
    Count,
};

