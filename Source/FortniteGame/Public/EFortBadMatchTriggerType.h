#pragma once
#include "CoreMinimal.h"
#include "EFortBadMatchTriggerType.generated.h"

UENUM(BlueprintType)
enum class EFortBadMatchTriggerType : uint8 {
    Unspecified,
    SmallTeam,
    LargeTeam,
    LetoTeam,
};

