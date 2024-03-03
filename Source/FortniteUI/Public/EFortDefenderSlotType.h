#pragma once
#include "CoreMinimal.h"
#include "EFortDefenderSlotType.generated.h"

UENUM(BlueprintType)
enum class EFortDefenderSlotType : uint8 {
    Invalid,
    Defender,
    Weapon,
};

