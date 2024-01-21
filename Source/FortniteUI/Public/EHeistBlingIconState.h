#pragma once
#include "CoreMinimal.h"
#include "EHeistBlingIconState.generated.h"

UENUM(BlueprintType)
enum class EHeistBlingIconState : uint8 {
    None,
    SupplyDrop,
    PickupItem,
    CarriedEnemy,
    CarriedAlly,
};

