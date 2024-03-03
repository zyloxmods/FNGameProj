#pragma once
#include "CoreMinimal.h"
#include "EFortSwimmingAudioType.generated.h"

UENUM(BlueprintType)
namespace EFortSwimmingAudioType {
    enum Type {
        Normal,
        Sprint,
        SprintStart,
        PickaxeSwing,
        NormalDBNO,
        SprintBoostStart,
        SwimStart,
        SwimEnd,
        Max_None,
    };
}

