#pragma once
#include "CoreMinimal.h"
#include "EActionState.generated.h"

UENUM(BlueprintType)
enum class EActionState : uint8 {
    TryingToEquip,
    EquippingItem,
    UsingItem,
    WaitingItemTermination,
    ActionEndedWithNoError,
    ActionEndedWithError,
};

