#pragma once
#include "CoreMinimal.h"
#include "EPayoutRewardType.generated.h"

UENUM(BlueprintType)
enum class EPayoutRewardType : uint8 {
    Invalid,
    Commerce,
    GameRelated,
    Token,
    Score,
};

