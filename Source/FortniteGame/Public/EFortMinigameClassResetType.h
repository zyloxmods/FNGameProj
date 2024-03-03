#pragma once
#include "CoreMinimal.h"
#include "EFortMinigameClassResetType.generated.h"

UENUM(BlueprintType)
enum class EFortMinigameClassResetType : uint8 {
    Never,
    RoundEnd,
    GameEnd,
    PlayerDeath,
};

