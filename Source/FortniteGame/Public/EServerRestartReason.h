#pragma once
#include "CoreMinimal.h"
#include "EServerRestartReason.generated.h"

UENUM(BlueprintType)
enum class EServerRestartReason : uint8 {
    HotfixApplied,
    GracefulShutdown,
    BeaconJoinDelayRestart,
    Other,
};

