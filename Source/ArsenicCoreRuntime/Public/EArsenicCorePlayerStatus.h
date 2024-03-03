#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.generated.h"

UENUM(BlueprintType)
enum class EArsenicCorePlayerStatus : uint8 {
    None,
    Human,
    Transforming_HumanToGhost,
    Ghost,
    EliminatedGhost,
    MAX,
};

