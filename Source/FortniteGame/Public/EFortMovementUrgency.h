#pragma once
#include "CoreMinimal.h"
#include "EFortMovementUrgency.generated.h"

UENUM(BlueprintType)
namespace EFortMovementUrgency {
    enum Type {
        None,
        Low,
        Medium,
        High,
        NumLevels,
    };
}

