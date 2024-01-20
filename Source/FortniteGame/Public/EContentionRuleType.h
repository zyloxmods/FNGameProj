#pragma once
#include "CoreMinimal.h"
#include "EContentionRuleType.generated.h"

UENUM(BlueprintType)
enum class EContentionRuleType : uint8 {
    MajorityWins,
    OneTeamOnlyWins,
};

