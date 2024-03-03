#pragma once
#include "CoreMinimal.h"
#include "EAlertLevel.generated.h"

UENUM(BlueprintType)
enum class EAlertLevel : uint8 {
    Unaware,
    Alerted,
    LKP,
    Threatened,
    Count,
};

