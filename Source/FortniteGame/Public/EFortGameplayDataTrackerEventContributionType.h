#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayDataTrackerEventContributionType.generated.h"

UENUM(BlueprintType)
enum class EFortGameplayDataTrackerEventContributionType : uint8 {
    Accumulate,
    Set,
};

