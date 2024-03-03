#pragma once
#include "CoreMinimal.h"
#include "ESpatialCustomizationRoomState.generated.h"

UENUM(BlueprintType)
enum class ESpatialCustomizationRoomState : uint8 {
    None,
    CategorySelection,
    CustomizationSelection,
};

