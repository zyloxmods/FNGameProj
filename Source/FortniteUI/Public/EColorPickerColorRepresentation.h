#pragma once
#include "CoreMinimal.h"
#include "EColorPickerColorRepresentation.generated.h"

UENUM(BlueprintType)
enum class EColorPickerColorRepresentation : uint8 {
    HSV,
    RGB,
    Max_NONE,
};

