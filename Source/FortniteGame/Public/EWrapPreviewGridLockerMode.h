#pragma once
#include "CoreMinimal.h"
#include "EWrapPreviewGridLockerMode.generated.h"

UENUM(BlueprintType)
enum class EWrapPreviewGridLockerMode : uint8 {
    IgnoreLockerConfiguration,
    SupportedWeaponsOnly,
    UnsupportedWeaponsOnly,
};

