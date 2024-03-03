#pragma once
#include "CoreMinimal.h"
#include "EFortMatchmakingPool.generated.h"

UENUM(BlueprintType)
enum class EFortMatchmakingPool : uint8 {
    Any,
    Desktop,
    PS4,
    XboxOne,
    Mobile,
    Test,
    Switch,
    Console,
    All,
};

