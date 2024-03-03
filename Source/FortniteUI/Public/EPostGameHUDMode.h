#pragma once
#include "CoreMinimal.h"
#include "EPostGameHUDMode.generated.h"

UENUM(BlueprintType)
enum class EPostGameHUDMode : uint8 {
    None,
    AllHidden,
    Spectating,
    AllHiddenExceptXP,
};

