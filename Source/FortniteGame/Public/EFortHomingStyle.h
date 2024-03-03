#pragma once
#include "CoreMinimal.h"
#include "EFortHomingStyle.generated.h"

UENUM(BlueprintType)
enum class EFortHomingStyle : uint8 {
    None,
    LockOn,
    LaserTargeted,
    LaserTargeted_NoTrace,
    DrunkArtillery,
};

