#pragma once
#include "CoreMinimal.h"
#include "EColorPickerType.generated.h"

UENUM(BlueprintType)
enum class EColorPickerType : uint8 {
    Swatches,
    CustomColor,
    Both,
};

