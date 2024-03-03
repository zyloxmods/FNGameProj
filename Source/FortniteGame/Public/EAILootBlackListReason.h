#pragma once
#include "CoreMinimal.h"
#include "EAILootBlackListReason.generated.h"

UENUM(BlueprintType)
enum class EAILootBlackListReason : uint8 {
    Invalid,
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
};

