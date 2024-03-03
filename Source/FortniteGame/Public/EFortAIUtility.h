#pragma once
#include "CoreMinimal.h"
#include "EFortAIUtility.generated.h"

UENUM(BlueprintType)
namespace EFortAIUtility {
    enum Type {
        KillPlayersMelee,
        KillPlayersRanged,
        KillPlayersArtillery,
        DestroyBuildingsMelee,
        DestroyBuildingsRanged,
        DestroyBuildingsArtillery,
        DestroyTraps,
        Tank,
        Infiltrate,
        Mob,
        Support,
        Kiting,
        AreaOfDenial,
        DisableTraps,
        Dormant,
        Assassin,
        MAX,
    };
}

