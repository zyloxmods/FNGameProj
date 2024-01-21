#pragma once
#include "CoreMinimal.h"
#include "ETrackDirection.generated.h"

UENUM(BlueprintType)
enum class ETrackDirection : uint8 {
    YNegative,
    XPositive,
    YPositive,
    XNegative,
    Max_None,
};

