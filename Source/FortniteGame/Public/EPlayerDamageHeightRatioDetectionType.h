#pragma once
#include "CoreMinimal.h"
#include "EPlayerDamageHeightRatioDetectionType.generated.h"

UENUM(BlueprintType)
enum class EPlayerDamageHeightRatioDetectionType : uint8 {
    None,
    FromBottom,
    FromTop,
};

