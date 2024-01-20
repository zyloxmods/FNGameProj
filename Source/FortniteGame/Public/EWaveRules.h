#pragma once
#include "CoreMinimal.h"
#include "EWaveRules.generated.h"

UENUM(BlueprintType)
enum class EWaveRules : uint8 {
    KillAllEnemies,
    Timed,
    KillPoints,
    KillSpecificEnemy,
    Mission,
};

