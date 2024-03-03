#pragma once
#include "CoreMinimal.h"
#include "EHoagieBoostState.generated.h"

UENUM(BlueprintType)
enum class EHoagieBoostState : uint8 {
    Unknown,
    Ready,
    Started,
    Finished,
    Failed,
};

