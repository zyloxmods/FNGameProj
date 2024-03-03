#pragma once
#include "CoreMinimal.h"
#include "ERewardTimePlayedType.generated.h"

UENUM(BlueprintType)
enum class ERewardTimePlayedType : uint8 {
    Default,
    NoReward,
    FlatValue,
};

