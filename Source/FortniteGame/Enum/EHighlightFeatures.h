#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EHighlightFeatures : uint8 
{
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
	EHighlightFeatures_MAX,
};
