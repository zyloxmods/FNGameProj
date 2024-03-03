#pragma once
#include "CoreMinimal.h"
#include "EForceKickAfterDeathMode.generated.h"

UENUM(BlueprintType)
enum class EForceKickAfterDeathMode : uint8 {
    Disabled,
    KickAll,
    KickPrivate,
};

