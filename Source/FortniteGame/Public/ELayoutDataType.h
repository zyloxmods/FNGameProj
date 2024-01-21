#pragma once
#include "CoreMinimal.h"
#include "ELayoutDataType.generated.h"

UENUM(BlueprintType)
enum class ELayoutDataType : uint8 {
    Custom,
    DefaultToolLayout,
    DefaultGameLayout,
    MAX_Local,
    CustomCloudLayout,
};

