#pragma once
#include "CoreMinimal.h"
#include "EFortInvalidActivityReason.generated.h"

UENUM(BlueprintType)
enum class EFortInvalidActivityReason : uint8 {
    None,
    PartyTooBig,
    PartyTooSmall,
    NotPartyLeader,
    MatchmakingAlready,
    InvalidData,
};

