#pragma once
#include "CoreMinimal.h"
#include "EFortPrototypingStatus.generated.h"

UENUM(BlueprintType)
enum class EFortPrototypingStatus : uint8 {
    Unknown,
    Disabled,
    Enabled,
};

