#pragma once
#include "CoreMinimal.h"
#include "EFortItemViewRotationMode.generated.h"

UENUM(BlueprintType)
enum class EFortItemViewRotationMode : uint8 {
    None,
    BoundsPivot,
    World,
    Relative,
};

