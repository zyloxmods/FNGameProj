#pragma once
#include "CoreMinimal.h"
#include "EPlayerIndicatorDisplayMode.generated.h"

UENUM(BlueprintType)
enum class EPlayerIndicatorDisplayMode : uint8 {
    DontOverride,
    TeamOnly,
    Enemies,
    Anyone,
    Never,
};

