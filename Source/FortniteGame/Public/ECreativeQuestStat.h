#pragma once
#include "CoreMinimal.h"
#include "ECreativeQuestStat.generated.h"

UENUM(BlueprintType)
enum class ECreativeQuestStat : uint8 {
    None,
    Eliminations,
    Eliminated,
    Score,
    MAX,
};

