#pragma once
#include "CoreMinimal.h"
#include "EUnlockRules.generated.h"

UENUM(BlueprintType)
enum class EUnlockRules : uint8
{
        UR_Reset,
        UR_MaintainState,
        UR_ResetDeactivate,
        UR_MAX UMETA(Hidden),
};

