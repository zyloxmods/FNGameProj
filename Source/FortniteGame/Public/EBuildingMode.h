#pragma once
#include "CoreMinimal.h"
#include "EBuildingMode.generated.h"

UENUM(BlueprintType)
enum class EBuildingMode : uint8 {
    None,
    BuildingsOnly,
    TrapsOnly,
    All,
};

