#pragma once
#include "CoreMinimal.h"
#include "EFortDualWieldSwingState.generated.h"

UENUM(BlueprintType)
enum class EFortDualWieldSwingState : uint8 {
    None,
    MainHand,
    OffHand,
};

