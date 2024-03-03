#pragma once
#include "CoreMinimal.h"
#include "EFortPickupTossState.generated.h"

UENUM(BlueprintType)
enum class EFortPickupTossState : uint8 {
    NotTossed,
    InProgress,
    AtRest,
};

