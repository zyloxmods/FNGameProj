#pragma once
#include "CoreMinimal.h"
#include "BattleMapHoveredReason.generated.h"

UENUM()
enum class BattleMapHoveredReason : int32 {
    None,
    Mouse,
    Code,
};

