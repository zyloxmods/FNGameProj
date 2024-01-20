#pragma once
#include "CoreMinimal.h"
#include "EFortControlRecoveryBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortControlRecoveryBehavior : uint8 {
    DefaultControl,
    LimitedControl,
    ChainControl,
};

