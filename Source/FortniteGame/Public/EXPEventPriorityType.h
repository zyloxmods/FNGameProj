#pragma once
#include "CoreMinimal.h"
#include "EXPEventPriorityType.generated.h"

UENUM(BlueprintType)
enum class EXPEventPriorityType : uint8 {
    NearReticle,
    XPBarOnly,
    TopCenter,
    Feed,
};

