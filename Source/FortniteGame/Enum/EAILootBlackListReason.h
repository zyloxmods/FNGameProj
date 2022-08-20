#pragma once

#include "CoreMinimal.h"

UENUM()
enum class EAILootBlackListReason : uint8 
{
	ExecutionError,
	CannotReachLootLocation,
	OutsideSafeZoneRadius,
	NoInventorySpace,
	LootStateUnavailable,
	PathNotFound,
	GoalOffNavmesh,
	AgentBlocked,
	IsolatedIsland,
	UnsupportedItem,
	Count,
	EAILootBlackListReason_MAX,
};
