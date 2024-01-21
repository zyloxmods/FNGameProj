#pragma once
#include "CoreMinimal.h"
#include "EAthenaMatchXpMultiplierSource.generated.h"

UENUM(BlueprintType)
enum class EAthenaMatchXpMultiplierSource : uint8 {
    Invalid,
    BattlePassSelf,
    BattlePassFriends,
    CosmeticSet,
    AntiAddictionPenalty,
    BonusXpEvent,
    MAX_COUNT,
};

