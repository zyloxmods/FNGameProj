#pragma once
#include "CoreMinimal.h"
#include "ELetoDisplayMode.generated.h"

UENUM(BlueprintType)
enum class ELetoDisplayMode : uint8 {
    PrimaryOnly,
    SingleToggle,
    Simultaneous,
};

