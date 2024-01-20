#pragma once
#include "CoreMinimal.h"
#include "ESelectionState.generated.h"

UENUM(BlueprintType)
enum class ESelectionState : uint8 {
    Unselected,
    Selected,
    CannotGift,
};

