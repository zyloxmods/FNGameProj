#pragma once
#include "CoreMinimal.h"
#include "EPlayerCompetitiveBanReasons.generated.h"

UENUM(BlueprintType)
enum class EPlayerCompetitiveBanReasons : uint8 {
    None,
    Cheating,
    Collusion,
    Toxicity,
    Harassment,
    Ringing,
    Gambling,
    Exploiting,
    IntentionalDisconnect,
    IllegalRestart,
    Other,
    AccountSharing,
    CircumventingRegionLock,
    CircumventingBan,
    Smurfing,
};

