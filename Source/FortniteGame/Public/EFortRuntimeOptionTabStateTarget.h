#pragma once
#include "CoreMinimal.h"
#include "EFortRuntimeOptionTabStateTarget.generated.h"

UENUM(BlueprintType)
enum class EFortRuntimeOptionTabStateTarget : uint8 {
    All,
    Primary,
    Secondary,
};

