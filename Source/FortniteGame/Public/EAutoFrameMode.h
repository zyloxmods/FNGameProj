#pragma once
#include "CoreMinimal.h"
#include "EAutoFrameMode.generated.h"

UENUM(BlueprintType)
enum class EAutoFrameMode : uint8 {
    Off,
    ManualOverride,
    AutoFrame,
};

