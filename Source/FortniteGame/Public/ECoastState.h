#pragma once
#include "CoreMinimal.h"
#include "ECoastState.generated.h"

UENUM(BlueprintType)
enum class ECoastState : uint8 {
    Idle,
    Mount,
    Coasting,
    Pedaling,
    PreDismount,
    Dismount,
    EndCoast,
};

