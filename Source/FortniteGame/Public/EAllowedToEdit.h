#pragma once
#include "CoreMinimal.h"
#include "EAllowedToEdit.generated.h"

UENUM(BlueprintType)
enum class EAllowedToEdit : uint8 {
    Default,
    Anyone,
};

