#pragma once
#include "CoreMinimal.h"
#include "EFortTeam.generated.h"

UENUM(BlueprintType)
namespace EFortTeam {
    enum Type {
        Spectator,
        HumanCampaign,
        Monster,
        HumanPvP_Team1,
        HumanPvP_Team2,
        MAX = 0xFF,
    };
}

