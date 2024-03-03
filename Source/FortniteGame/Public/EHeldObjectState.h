#pragma once
#include "CoreMinimal.h"
#include "EHeldObjectState.generated.h"

UENUM(BlueprintType)
enum class EHeldObjectState : uint8 {
    Unheld,
    Held,
    Thrown,
    Placed,
    Dropped,
};

