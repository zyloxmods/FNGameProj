#pragma once
#include "CoreMinimal.h"
#include "EFortTipDisplayPlatformGroup.generated.h"

UENUM(BlueprintType)
enum class EFortTipDisplayPlatformGroup : uint8 {
    None,
    Desktop,
    Console,
    Switch = 0x4,
    Mobile = 0x8,
};

