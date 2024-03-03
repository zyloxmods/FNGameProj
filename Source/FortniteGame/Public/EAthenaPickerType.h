#pragma once
#include "CoreMinimal.h"
#include "EAthenaPickerType.generated.h"

UENUM(BlueprintType)
enum class EAthenaPickerType : uint8 {
    EditMode,
    Interact,
    MAX,
};

