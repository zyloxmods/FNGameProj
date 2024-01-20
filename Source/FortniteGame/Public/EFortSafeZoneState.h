#pragma once
#include "CoreMinimal.h"
#include "EFortSafeZoneState.generated.h"

UENUM(BlueprintType)
enum class EFortSafeZoneState : uint8 {
    None,
    Starting,
    Holding,
    Shrinking,
};

