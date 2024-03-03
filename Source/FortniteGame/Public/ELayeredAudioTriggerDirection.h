#pragma once
#include "CoreMinimal.h"
#include "ELayeredAudioTriggerDirection.generated.h"

UENUM(BlueprintType)
enum class ELayeredAudioTriggerDirection : uint8 {
    AnyDirection,
    Forwards,
    Sideways,
    Backwards,
};

