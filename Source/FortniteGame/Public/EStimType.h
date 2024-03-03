#pragma once
#include "CoreMinimal.h"
#include "EStimType.generated.h"

UENUM(BlueprintType)
enum class EStimType : uint8 {
    Seeing,
    Seen,
    MightHaveSeen,
    Hurt,
    Heard,
    Obstacle,
    Enemy,
    Unknown,
    Count = 0x7,
};

