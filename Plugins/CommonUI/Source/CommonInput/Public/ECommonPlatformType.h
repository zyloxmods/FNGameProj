#pragma once
#include "CoreMinimal.h"
#include "ECommonPlatformType.generated.h"

UENUM(BlueprintType)
enum class ECommonPlatformType : uint8 {
    PC,
    Mac,
    PS4,
    XBox,
    IOS,
    Android,
    Switch,
    Count,
};

