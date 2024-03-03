#pragma once
#include "CoreMinimal.h"
#include "EFortMobileFPSMode.generated.h"

UENUM(BlueprintType)
enum class EFortMobileFPSMode : uint8 {
    Mode_20Fps,
    Mode_30Fps,
    Mode_45Fps,
    Mode_60Fps,
    Mode_90Fps,
    Mode_120Fps,
    Num,
};

