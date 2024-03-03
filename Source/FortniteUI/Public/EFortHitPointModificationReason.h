#pragma once
#include "CoreMinimal.h"
#include "EFortHitPointModificationReason.generated.h"

UENUM(BlueprintType)
enum class EFortHitPointModificationReason : uint8 {
    Invalid,
    InitalSet,
    AutoRegen,
    ItemRegen,
    DamageOverTime,
    DamageReceived,
};

