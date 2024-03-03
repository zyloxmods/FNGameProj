#pragma once
#include "CoreMinimal.h"
#include "ECooldownTrackingType.generated.h"

UENUM(BlueprintType)
enum class ECooldownTrackingType : uint8 {
    Cue,
    AbilityCooldownTags,
    COUNT,
};

