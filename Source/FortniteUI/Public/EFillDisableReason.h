#pragma once
#include "CoreMinimal.h"
#include "EFillDisableReason.generated.h"

UENUM(BlueprintType)
enum class EFillDisableReason : uint8 {
    Enabled,
    FillDisabledOnPlaylist,
    NotPartyLeader,
    AlreadyMatchmaking,
    PartyTooSmall,
    PartyTooBig,
    InactiveTournament,
    NoSplitscreen,
};

