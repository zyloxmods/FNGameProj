#pragma once
#include "CoreMinimal.h"
#include "EVoteSessionState.generated.h"

UENUM(BlueprintType)
enum class EVoteSessionState : uint8 {
    None,
    Setup,
    Voting,
    Complete,
    Shutdown,
};

