#pragma once
#include "CoreMinimal.h"
#include "EAIHotSpotSlotFilter.generated.h"

UENUM(BlueprintType)
enum class EAIHotSpotSlotFilter : uint8 {
    All,
    AvailableOnly,
    UnavailableOnly,
};

