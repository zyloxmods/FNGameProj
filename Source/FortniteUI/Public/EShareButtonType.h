#pragma once
#include "CoreMinimal.h"
#include "EShareButtonType.generated.h"

UENUM(BlueprintType)
enum class EShareButtonType : uint8 {
    IOS,
    Android,
    Generic,
};

