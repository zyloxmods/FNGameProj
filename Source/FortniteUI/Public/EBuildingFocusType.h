#pragma once
#include "CoreMinimal.h"
#include "EBuildingFocusType.generated.h"

UENUM(BlueprintType)
enum class EBuildingFocusType : uint8 {
    Contextual,
    Interactable,
    Normal,
    Count,
};

