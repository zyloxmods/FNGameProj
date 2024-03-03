#pragma once
#include "CoreMinimal.h"
#include "EBuildingDamageTeamFilter.generated.h"

UENUM(BlueprintType)
enum class EBuildingDamageTeamFilter : uint8 {
    Default,
    OwnerOnly,
    TeamOnly,
    EnemyOnly,
    EnemyAndOwnerOnly,
    None,
};

