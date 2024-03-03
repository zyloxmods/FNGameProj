#pragma once
#include "CoreMinimal.h"
#include "EThirdPersonAutoFollowMode.generated.h"

UENUM(BlueprintType)
enum class EThirdPersonAutoFollowMode : uint8 {
    Off,
    Auto,
    Lazy,
};

