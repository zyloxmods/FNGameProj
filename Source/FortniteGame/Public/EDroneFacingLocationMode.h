#pragma once
#include "CoreMinimal.h"
#include "EDroneFacingLocationMode.generated.h"

UENUM(BlueprintType)
enum class EDroneFacingLocationMode : uint8 {
    NotFacingLocation,
    FindingPoint,
    TrackingPoint,
};

