#pragma once
#include "CoreMinimal.h"
#include "ELootElementType.generated.h"

UENUM(BlueprintType)
enum class ELootElementType : uint8 {
    Pickup,
    Chest,
    Invalid = 0xFF,
};

