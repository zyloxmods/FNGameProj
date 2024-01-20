#pragma once
#include "CoreMinimal.h"
#include "EInventorySlotType.generated.h"

UENUM(BlueprintType)
enum class EInventorySlotType : uint8 {
    PickAxe,
    ShortRange,
    MediumRange,
    LongRange,
    GadgetsOrSpecialWeapon,
    HealthOrArmor,
    MaxSlot,
};

