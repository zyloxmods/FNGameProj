#pragma once
#include "CoreMinimal.h"
#include "EFortBadMatchTriggerOperation.generated.h"

UENUM(BlueprintType)
enum class EFortBadMatchTriggerOperation : uint8 {
    LessThan,
    LessThanOrEqual,
    Equal,
    GreaterThan,
    GreaterThanOrEqual,
};

