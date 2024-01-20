#pragma once
#include "CoreMinimal.h"
#include "ESquadSlotType.generated.h"

UENUM(BlueprintType)
enum class ESquadSlotType : uint8 {
    HeroSquadMissionDefender,
    SurvivorSquadLeadSurvivor,
    SurvivorSquadSurvivor,
    DefenderSquadMember,
    ExpeditionSquadMember,
};

