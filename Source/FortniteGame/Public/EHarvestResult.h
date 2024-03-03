#pragma once
#include "CoreMinimal.h"
#include "EHarvestResult.generated.h"

UENUM(BlueprintType)
enum class EHarvestResult : uint8 {
    None,
    InProgress,
    Success,
    Fail,
};

