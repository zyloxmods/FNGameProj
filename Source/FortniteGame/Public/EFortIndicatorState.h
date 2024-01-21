#pragma once
#include "CoreMinimal.h"
#include "EFortIndicatorState.generated.h"

UENUM(BlueprintType)
enum class EFortIndicatorState : uint8 {
    Hidden,
    OnlyFriendsVisible,
    Visible,
};

