#pragma once
#include "CoreMinimal.h"
#include "ETournmentPosterViolatorState.generated.h"

UENUM(BlueprintType)
enum class ETournmentPosterViolatorState : uint8 {
    Hidden,
    Live,
    Countdown,
    Info,
};

