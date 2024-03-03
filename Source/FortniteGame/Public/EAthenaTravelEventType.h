#pragma once
#include "CoreMinimal.h"
#include "EAthenaTravelEventType.generated.h"

UENUM(BlueprintType)
enum class EAthenaTravelEventType : uint8 {
    GroundMove,
    AirMove,
    BattleBusJump,
    LaunchJump,
    Landed,
    OpenChest,
    OpenAmmo,
    GotAssist,
    GotKnockdown,
    GotKill,
    PlayerDowned,
    PlayerDied,
    Won,
    DealtDamage,
    HealthChange,
    GotItem,
    DroppedItem,
    ShieldChange,
    WeaponExecuted,
    EnteredVehicle,
    ExitedVehicle,
    TrapBuilt,
    UsedItem,
    ZoneUpdate,
    PlacedBuilding,
    EmoteUsed,
    UpgradedBuilding,
    EditedBuilding,
    Count,
};

