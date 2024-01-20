#pragma once
#include "CoreMinimal.h"
#include "EFortHotSpotSlot.generated.h"

UENUM(BlueprintType)
enum class EFortHotSpotSlot : uint8 {
    Melee,
    MeleeHuge,
    Ranged,
    None,
};

