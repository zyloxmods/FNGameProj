#pragma once
#include "CoreMinimal.h"
#include "EComboSlotType.generated.h"

UENUM(BlueprintType)
enum class EComboSlotType : uint8 {
    Primary,
    Secondary,
    Combo,
    Creative,
    COUNT,
};

