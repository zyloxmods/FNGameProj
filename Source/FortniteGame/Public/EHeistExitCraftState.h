#pragma once
#include "CoreMinimal.h"
#include "EHeistExitCraftState.generated.h"

UENUM(BlueprintType)
enum class EHeistExitCraftState : uint8 {
    None,
    Incoming,
    Spawned,
    Exited,
};

