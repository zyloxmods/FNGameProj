#pragma once
#include "CoreMinimal.h"
#include "EFortAnalyticsClientEngagementEventType.generated.h"

UENUM(BlueprintType)
enum class EFortAnalyticsClientEngagementEventType : uint8 {
    None,
    DamageReceivedFromPlayerPawn,
    DamageDealtToPlayerPawn,
    DamageDealtToPlayerBuild,
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
    PlayerPawnDied,
    PlayerPawnSpawned,
    Count,
};

