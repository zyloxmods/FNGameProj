#pragma once
#include "CoreMinimal.h"
#include "EFortPrioritizedWidgetInterruptedBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortPrioritizedWidgetInterruptedBehavior : uint8 {
    RemainInQueue,
    Drop,
};

