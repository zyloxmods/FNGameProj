#pragma once
#include "CoreMinimal.h"
#include "EFreeFallingMode.generated.h"

UENUM(BlueprintType)
enum class EFreeFallingMode : uint8 {
    Idle,
    Random,
    TowardNearestAlly,
};

