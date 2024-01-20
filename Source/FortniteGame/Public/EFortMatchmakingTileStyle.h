#pragma once
#include "CoreMinimal.h"
#include "EFortMatchmakingTileStyle.generated.h"

UENUM(BlueprintType)
enum class EFortMatchmakingTileStyle : uint8 {
    None,
    Special,
    HighStakes,
    Showdown,
};

