#pragma once
#include "CoreMinimal.h"
#include "EAthenaScoringEvent.generated.h"

UENUM(BlueprintType)
enum class EAthenaScoringEvent : uint8 {
    None,
    Elimination,
    ChestOpened,
    AmmoCanOpened,
    SupplyDropOpened,
    SupplyLlamaOpened,
    ForagedItemConsumed,
    SurvivalInMinutes,
    CollectedCoinBronze,
    CollectedCoinSilver,
    CollectedCoinGold,
    AIKilled,
};

