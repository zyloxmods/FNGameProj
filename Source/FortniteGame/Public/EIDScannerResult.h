#pragma once
#include "CoreMinimal.h"
#include "EIDScannerResult.generated.h"

UENUM(BlueprintType)
enum class EIDScannerResult : uint8 {
    Success_PlayerBelongsToFaction,
    Success_DownedPlayer,
    Success_DownedGuard,
    Success_PlayerIsDisguised,
    Failure_NotFromFaction,
    Other,
};

