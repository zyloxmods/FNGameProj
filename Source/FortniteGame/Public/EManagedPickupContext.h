#pragma once
#include "CoreMinimal.h"
#include "EManagedPickupContext.generated.h"

UENUM(BlueprintType)
enum class EManagedPickupContext : uint8 {
    Unknown,
    PlayerDropped,
    Overflow,
    Spawned,
};

