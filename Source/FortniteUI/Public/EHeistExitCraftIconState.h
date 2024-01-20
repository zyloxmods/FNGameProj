#pragma once
#include "CoreMinimal.h"
#include "EHeistExitCraftIconState.generated.h"

UENUM(BlueprintType)
enum class EHeistExitCraftIconState : uint8 {
    None,
    Incoming,
    Spawned,
    Exited,
};

