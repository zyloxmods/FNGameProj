#pragma once
#include "CoreMinimal.h"
#include "EFortMatchmakingViolatorStyle.generated.h"

UENUM(BlueprintType)
enum class EFortMatchmakingViolatorStyle : uint8 {
    None,
    Basic,
    HighStakes,
    Showdown,
};

