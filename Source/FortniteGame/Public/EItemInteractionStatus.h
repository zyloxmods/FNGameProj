#pragma once
#include "CoreMinimal.h"
#include "EItemInteractionStatus.generated.h"

UENUM(BlueprintType)
enum class EItemInteractionStatus : uint8 {
    Interrupted,
    Completed,
    TimedOut,
};

