#pragma once
#include "CoreMinimal.h"
#include "EFortAnalyticsClientEngagementEventType.generated.h"

UENUM(BlueprintType)
enum class EFortAnalyticsClientEngagementEventType : uint8 {
    None,
    DamageReceivedFromPlayerPawn,
    DamageDealtToPlayerPawn,
    DamageDealtToOther,
    EngagementTimeout,
    PlayerWon,
    PlayerDeathOnWin,
    TeamWon,
    TeamLost,
    PlayerLost,
    PlayerKilledPlayer,
    PlayerFiredWeapon,
    ManagerStopped,
    Count,
};

