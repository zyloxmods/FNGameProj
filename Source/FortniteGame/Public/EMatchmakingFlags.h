#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingFlags.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingFlags : uint8 {
    None,
    CreateNewOnly,
    NoReservation,
    Private = 0x4,
    UseWorldDataOwner = 0x8,
};

