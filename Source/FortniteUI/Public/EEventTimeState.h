#pragma once
#include "CoreMinimal.h"
#include "EEventTimeState.generated.h"

UENUM(BlueprintType)
enum class EEventTimeState : uint8 {
    Unknown,
    Completed,
    Live,
    Future,
};

