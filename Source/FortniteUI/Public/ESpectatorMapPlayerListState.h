#pragma once
#include "CoreMinimal.h"
#include "ESpectatorMapPlayerListState.generated.h"

UENUM(BlueprintType)
enum class ESpectatorMapPlayerListState : uint8 {
    Default,
    Irrelevant,
    Eliminated,
};

