#pragma once
#include "CoreMinimal.h"
#include "EFireModeType.generated.h"

UENUM(BlueprintType)
enum class EFireModeType : uint8 {
    Unset,
    TapToShoot,
    FireButton,
    AutoFire,
    ForceTouch,
    Custom,
    MAX,
};

