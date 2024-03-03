#pragma once
#include "CoreMinimal.h"
#include "EFortReplicatedStat.generated.h"

UENUM(BlueprintType)
namespace EFortReplicatedStat {
    enum Type {
        MonsterKills,
        MonsterDamagePoints,
        PlayerKills,
        WoodGathered,
        StoneGathered,
        MetalGathered,
        Deaths,
        BluGloActivity,
        BuildingsBuilt,
        BuildingsBuilt_Wood,
        BuildingsBuilt_Stone,
        BuildingsBuilt_Metal,
        BuildingsUpgraded_Wood2,
        BuildingsUpgraded_Wood3,
        BuildingsUpgraded_Stone2,
        BuildingsUpgraded_Stone3,
        BuildingsUpgraded_Metal2,
        BuildingsUpgraded_Metal3,
        BuildingsDestroyed,
        Repair_Wood,
        Repair_Stone,
        Repair_Metal,
        FlagsCaptured,
        FlagsReturned,
        ContainersLooted,
        CraftingPoints,
        TrapPlacementPoints,
        TrapActivationPoints,
        TotalScore,
        OldTotalScore,
        CombatScore,
        BuildingScore,
        UtilityScore,
        BadgesScore,
        None,
        MAX,
    };
}

