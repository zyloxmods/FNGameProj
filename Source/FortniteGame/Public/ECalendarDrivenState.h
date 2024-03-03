#pragma once
#include "CoreMinimal.h"
#include "ECalendarDrivenState.generated.h"

UENUM(BlueprintType)
enum class ECalendarDrivenState : uint8 {
    ForceEnable,
    ForceDisable,
};

