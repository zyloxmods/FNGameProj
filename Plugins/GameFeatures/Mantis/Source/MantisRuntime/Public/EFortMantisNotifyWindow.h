#pragma once
#include "CoreMinimal.h"
#include "EFortMantisNotifyWindow.generated.h"

UENUM(BlueprintType)
enum class EFortMantisNotifyWindow : uint8 {
    Invalid,
    Input,
    Execution,
    Damage,
};

