#pragma once
#include "CoreMinimal.h"
#include "EFortConsoleFPSMode.generated.h"

UENUM(BlueprintType)
enum class EFortConsoleFPSMode : uint8 {
    Mode_30Fps,
    Mode_30Fps_Unlocked,
    Mode_60Fps,
    Mode_MAX UMETA(Hidden),
};

