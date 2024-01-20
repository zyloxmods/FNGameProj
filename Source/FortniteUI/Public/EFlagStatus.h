#pragma once
#include "CoreMinimal.h"
#include "EFlagStatus.generated.h"

UENUM(BlueprintType)
enum class EFlagStatus : uint8 {
    FlagPresent,
    FlagNotPresent,
};

