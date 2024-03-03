#pragma once
#include "CoreMinimal.h"
#include "EDefenderSpawnFailureReason.generated.h"

UENUM(BlueprintType)
enum class EDefenderSpawnFailureReason : uint8 {
    None,
    AllPlayerSlotsFull,
    DefendersNotUnlocked,
    CurrentlySimulatingDefender,
    NotOutpostOwner,
};

