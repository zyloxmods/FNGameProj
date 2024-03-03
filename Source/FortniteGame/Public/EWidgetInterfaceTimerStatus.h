#pragma once
#include "CoreMinimal.h"
#include "EWidgetInterfaceTimerStatus.generated.h"

UENUM(BlueprintType)
enum class EWidgetInterfaceTimerStatus : uint8 {
    None,
    Active,
    Paused,
    Inactive,
};

