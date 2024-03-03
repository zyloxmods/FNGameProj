#pragma once
#include "CoreMinimal.h"
#include "ECrucibleWhitelistOverride.generated.h"

UENUM(BlueprintType)
enum class ECrucibleWhitelistOverride : uint8 {
    DoNothing,
    ForceOn,
    ForceOff,
};

