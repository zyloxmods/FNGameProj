#pragma once
#include "CoreMinimal.h"
#include "EBacchusHUDStateType.generated.h"

UENUM(BlueprintType)
enum class EBacchusHUDStateType : uint8 {
    DoNothing,
    Hide,
    Show,
    FallbackToDefault,
};

