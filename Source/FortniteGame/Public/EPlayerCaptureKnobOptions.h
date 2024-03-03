#pragma once
#include "CoreMinimal.h"
#include "EPlayerCaptureKnobOptions.generated.h"

UENUM(BlueprintType)
enum class EPlayerCaptureKnobOptions : uint8 {
    Off,
    EachPlayer,
    OnePlayerPerTeam,
    OwningTeam,
};

