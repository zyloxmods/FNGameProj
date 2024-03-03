#pragma once
#include "CoreMinimal.h"
#include "EAthenaLockerInfoRestrictionWarning.generated.h"

UENUM(BlueprintType)
enum class EAthenaLockerInfoRestrictionWarning : uint8 {
    UnsatisfiedExclusiveItem,
    LockedEmote,
    Unknown,
};

