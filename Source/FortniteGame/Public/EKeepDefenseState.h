#pragma once
#include "CoreMinimal.h"
#include "EKeepDefenseState.generated.h"

UENUM(BlueprintType)
namespace EKeepDefenseState {
    enum Type {
        Inactive,
        Warmup,
        Defense,
        LastAlive,
        Max,
    };
}

