#pragma once
#include "CoreMinimal.h"
#include "EAthenaBroadcastKillFeedEntryType.generated.h"

UENUM(BlueprintType)
enum class EAthenaBroadcastKillFeedEntryType : uint8 {
    Elimination,
    Storm,
    FallDamage,
    Explosion,
    DBNO,
};

