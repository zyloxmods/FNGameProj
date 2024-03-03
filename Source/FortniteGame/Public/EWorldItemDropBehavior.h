#pragma once
#include "CoreMinimal.h"
#include "EWorldItemDropBehavior.generated.h"

UENUM(BlueprintType)
enum class EWorldItemDropBehavior : uint8 {
    DropAsPickup,
    DestroyOnDrop,
    DropAsPickupDestroyOnEmpty,
    DropAsPickupEvenWhenEmpty,
};

