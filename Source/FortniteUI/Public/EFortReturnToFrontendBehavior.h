#pragma once
#include "CoreMinimal.h"
#include "EFortReturnToFrontendBehavior.generated.h"

UENUM(BlueprintType)
enum class EFortReturnToFrontendBehavior : uint8 {
    NotSpecified,
    HomeScreen,
    MapScreen,
    MapScreenWithAutoLaunch,
    MapScreenWithMinimalAutoLaunch,
};

