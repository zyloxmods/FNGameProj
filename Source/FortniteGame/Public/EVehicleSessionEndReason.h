#pragma once
#include "CoreMinimal.h"
#include "EVehicleSessionEndReason.generated.h"

UENUM(BlueprintType)
enum class EVehicleSessionEndReason : uint8 {
    Invalid,
    NoPassengers,
};

