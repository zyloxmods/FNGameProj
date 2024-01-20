#pragma once
#include "CoreMinimal.h"
#include "EReadyCheckState.generated.h"

UENUM(BlueprintType)
enum class EReadyCheckState : uint8 {
    CheckStarted,
    Ready,
    NotReady,
};

