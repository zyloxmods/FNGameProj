#pragma once
#include "CoreMinimal.h"
#include "EAircraftLaunchReason.generated.h"

UENUM(BlueprintType)
enum class EAircraftLaunchReason : uint8 {
    StdTimerAllPlayers,
    EarlyTimerAllPlayers,
    StdTimerMostPlayers,
    EarlyTimerMostPlayers,
    StdTimerFewPlayers,
};

