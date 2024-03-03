#pragma once
#include "CoreMinimal.h"
#include "ETrustedPlatformType.generated.h"

UENUM(BlueprintType)
enum class ETrustedPlatformType : uint8 {
    Unknown,
    Untrusted,
    PS4,
    PS5,
    XboxOne,
    Switch,
};

