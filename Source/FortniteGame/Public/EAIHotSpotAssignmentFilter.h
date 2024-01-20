#pragma once
#include "CoreMinimal.h"
#include "EAIHotSpotAssignmentFilter.generated.h"

UENUM(BlueprintType)
enum class EAIHotSpotAssignmentFilter : uint8 {
    All,
    WithSlots,
    WaitingList,
};

