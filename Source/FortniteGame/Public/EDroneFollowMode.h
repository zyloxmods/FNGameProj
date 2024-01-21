#pragma once
#include "CoreMinimal.h"
#include "EDroneFollowMode.generated.h"

UENUM(BlueprintType)
enum class EDroneFollowMode : uint8 {
    None,
    ForceFacingLocation,
    ForceFacingFollowedPlayer,
    TetherToFollowedPlayer,
    MAX,
};

