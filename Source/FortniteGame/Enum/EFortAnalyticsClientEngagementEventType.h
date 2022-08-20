#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EFortAnalyticsClientEngagementEventType : uint8 
{
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
	EFortAnalyticsClientEngagementEventType_MAX,
};
