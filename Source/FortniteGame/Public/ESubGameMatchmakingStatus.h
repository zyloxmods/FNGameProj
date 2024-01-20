#pragma once
#include "CoreMinimal.h"
#include "ESubGameMatchmakingStatus.generated.h"

UENUM(BlueprintType)
enum class ESubGameMatchmakingStatus : uint8 {
    Disabled,
    Enabled,
};

