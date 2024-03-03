#pragma once
#include "CoreMinimal.h"
#include "EHeistExitCraftUIState.generated.h"

UENUM(BlueprintType)
enum class EHeistExitCraftUIState : uint8 {
    None,
    OnTheWay,
    Incoming,
    Arrived,
};

