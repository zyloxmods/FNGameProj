#pragma once
#include "CoreMinimal.h"
#include "EFortMovementUrgency.generated.h"

UENUM(BlueprintType)
enum class EFortMovementUrgency : uint8 {
        None,
        Low,
        Medium,
        High,
        NumLevels,
};


