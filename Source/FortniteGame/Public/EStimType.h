#pragma once
#include "CoreMinimal.h"
#include "EStimType.generated.h"

UENUM(BlueprintType)
enum class EStimType : uint8 {
    Seeing,
    Saw,
    Smashable,
    Hurt,
    Heard,
    Unknown,
    Count = 0x5,
};

