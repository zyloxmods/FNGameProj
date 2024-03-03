#pragma once
#include "CoreMinimal.h"
#include "EHighlightFeatures.generated.h"

UENUM(BlueprintType)
enum class EHighlightFeatures : uint8 {
    INVALID,
    FollowingPlayerKill,
    FollowingPlayerDeath,
    InterestingDeathCause,
    BusyBuilder,
    FastMover,
    LongDistanceKill,
    Multikill,
    StormCloudAction,
    WinningMoment,
    PlacementScore,
    FollowingPlayerKillDBNO,
    FollowingPlayerDBNOFinished,
    MaxLongKillDistance,
    VehicleMultikill,
    VehiclePlayerLaunchDistance,
    VehicleKills,
    MaxMidFallKillTime,
    MaxMidFallNoScopeKillTime,
    MaxMidFallKillSpeed,
    MaxMidFallNoScopeSpeed,
    FallingElimination,
    VehicleUsage,
    COUNT,
};

