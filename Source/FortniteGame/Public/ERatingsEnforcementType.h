#pragma once
#include "CoreMinimal.h"
#include "ERatingsEnforcementType.generated.h"

UENUM(BlueprintType)
enum class ERatingsEnforcementType : uint8 {
    Default,
    IgnoreMaximums,
    IgnoreParty,
    IgnorePartyMaximum,
};

