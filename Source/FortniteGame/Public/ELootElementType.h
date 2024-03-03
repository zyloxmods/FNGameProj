#pragma once
#include "CoreMinimal.h"
#include "ELootElementType.generated.h"

UENUM(BlueprintType)
enum class ELootElementType : uint8 {
    Pickup,
    Chest,
    SupplyDrop,
    Invalid = 0xFF,
};

