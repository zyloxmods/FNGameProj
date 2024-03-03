#pragma once
#include "CoreMinimal.h"
#include "EFortBuildingDestroyedReason.generated.h"

UENUM(BlueprintType)
enum class EFortBuildingDestroyedReason : uint8 {
    Unknown,
    WeaponDamage,
    LostSupport,
    Edit,
    FireDirect,
    FireIndirect,
};

