#pragma once
#include "CoreMinimal.h"
#include "ESpawnMachineSubTextState.generated.h"

UENUM(BlueprintType)
enum class ESpawnMachineSubTextState : uint8 {
    NoCards,
    VanInUse,
    None,
};

