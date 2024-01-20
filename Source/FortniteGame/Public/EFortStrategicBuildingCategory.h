#pragma once
#include "CoreMinimal.h"
#include "EFortStrategicBuildingCategory.generated.h"

UENUM(BlueprintType)
enum class EFortStrategicBuildingCategory : uint8 {
    Defensive,
    Offensive,
    Utility,
};

