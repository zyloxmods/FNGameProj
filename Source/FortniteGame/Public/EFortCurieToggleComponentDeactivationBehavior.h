#pragma once
#include "CoreMinimal.h"
#include "EFortCurieToggleComponentDeactivationBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortCurieToggleComponentDeactivationBehavior : uint8 {
    NeverDeactivate,
    TimedDeactivationAllowRefresh,
    TimedDeactivationNoRefresh,
};

