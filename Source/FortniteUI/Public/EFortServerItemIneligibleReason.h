#pragma once
#include "CoreMinimal.h"
#include "EFortServerItemIneligibleReason.generated.h"

UENUM(BlueprintType)
enum class EFortServerItemIneligibleReason : uint8 {
    None,
    PartyTooBig,
    PartyTooSmall,
    NotPartyLeader,
    MatchmakingAlready,
    NotSupportedByLeto,
    InvalidData,
};

