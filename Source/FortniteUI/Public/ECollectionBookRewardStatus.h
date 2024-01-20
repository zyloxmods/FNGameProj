#pragma once
#include "CoreMinimal.h"
#include "ECollectionBookRewardStatus.generated.h"

UENUM(BlueprintType)
enum class ECollectionBookRewardStatus : uint8 {
    Unknown,
    Available,
    Claimed,
};

