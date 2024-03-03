#pragma once
#include "CoreMinimal.h"
#include "ESavedSupportStatus.generated.h"

UENUM(BlueprintType)
enum class ESavedSupportStatus : uint8 {
    UnknownState,
    Supported,
    UnSupported,
};

