#pragma once
#include "CoreMinimal.h"
#include "ERewardPlacementBonusType.generated.h"

UENUM(BlueprintType)
enum class ERewardPlacementBonusType : uint8 {
    Solo,
    Duo,
    Squad,
    LargeTeam,
    None,
    TwoTeam,
    MediumTeam,
    QuickSolo,
    QuickDuo,
    QuickSquad,
    QuickLargeTeam,
    QuickTwoTeam,
    QuickMediumTeam,
    SinglePlacement,
};

