#pragma once
#include "CoreMinimal.h"
#include "EFortRewardActivityType.generated.h"

UENUM(BlueprintType)
namespace EFortRewardActivityType {
    enum Type {
        General,
        MissionPrimary,
        MissionSecondary,
        AccountLevelUp,
        Max_None,
    };
}

