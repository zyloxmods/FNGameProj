#pragma once
#include "CoreMinimal.h"
#include "ESubGameAccessStatus.generated.h"

UENUM(BlueprintType)
enum class ESubGameAccessStatus : uint8 {
    Disabled,
    LimitedAccess,
    OpenAccess,
};

