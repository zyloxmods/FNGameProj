#pragma once
#include "CoreMinimal.h"
#include "ECameraSpaceHoldPosition.generated.h"

UENUM(BlueprintType)
enum class ECameraSpaceHoldPosition : uint8 {
    AsPickup,
    Left,
    Center,
    Right,
};

