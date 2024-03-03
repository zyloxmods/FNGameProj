#pragma once
#include "CoreMinimal.h"
#include "EModalContainerSlot.generated.h"

UENUM(BlueprintType)
enum class EModalContainerSlot : uint8 {
    Top,
    Middle,
    Bottom,
    Background,
    Max,
};

