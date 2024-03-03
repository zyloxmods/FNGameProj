#pragma once
#include "CoreMinimal.h"
#include "EAthenaInventoryDoubleClickAction.generated.h"

UENUM(BlueprintType)
enum class EAthenaInventoryDoubleClickAction : uint8 {
    Nothing,
    Equip,
    DropStack,
};

