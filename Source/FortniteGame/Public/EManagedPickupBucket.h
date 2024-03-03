#pragma once
#include "CoreMinimal.h"
#include "EManagedPickupBucket.generated.h"

UENUM(BlueprintType)
enum class EManagedPickupBucket : uint8 {
    Default,
    Junk,
    Normal,
    Important,
};

