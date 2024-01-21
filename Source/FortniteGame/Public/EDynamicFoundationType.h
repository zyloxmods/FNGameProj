#pragma once
#include "CoreMinimal.h"
#include "EDynamicFoundationType.generated.h"

UENUM(BlueprintType)
enum class EDynamicFoundationType : uint8 {
    Static,
    StartEnabled_Stationary,
    StartEnabled_Dynamic,
    StartDisabled,
};

