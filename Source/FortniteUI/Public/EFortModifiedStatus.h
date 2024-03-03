#pragma once
#include "CoreMinimal.h"
#include "EFortModifiedStatus.generated.h"

UENUM(BlueprintType)
enum class EFortModifiedStatus : uint8 {
    IsDefault,
    IsModified,
    Unsupported,
};

