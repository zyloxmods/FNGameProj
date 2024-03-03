#pragma once
#include "CoreMinimal.h"
#include "EFortPrioritizedWidgetPriority.generated.h"

UENUM(BlueprintType)
enum class EFortPrioritizedWidgetPriority : uint8 {
    Priority_0,
    Priority_1,
    Priority_2,
    Priority_3,
    Priority_4,
    Priority_5,
    NumberOfPrios,
};

