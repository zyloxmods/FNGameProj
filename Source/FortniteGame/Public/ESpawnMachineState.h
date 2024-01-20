#pragma once
#include "CoreMinimal.h"
#include "ESpawnMachineState.generated.h"

UENUM(BlueprintType)
enum class ESpawnMachineState : uint8 {
    Default,
    WaitingForUse,
    Active,
    Complete,
    OnCooldown,
};

