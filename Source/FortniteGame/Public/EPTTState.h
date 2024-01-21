#pragma once
#include "CoreMinimal.h"
#include "EPTTState.generated.h"

UENUM(BlueprintType)
enum class EPTTState : uint8 {
    Enabled,
    MicDisabled,
    AllSoundDisabled,
};

