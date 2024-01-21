#pragma once
#include "CoreMinimal.h"
#include "EContentionRules.generated.h"

UENUM(BlueprintType)
enum class EContentionRules : uint8
{
        CR_MajorityWins,
        CR_OneTeamOnlyWins,
        CR_MAX UMETA(Hidden),
};

