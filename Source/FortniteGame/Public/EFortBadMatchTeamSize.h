#pragma once
#include "CoreMinimal.h"
#include "EFortBadMatchTeamSize.generated.h"

UENUM(BlueprintType)
enum class EFortBadMatchTeamSize : uint8 {
    Unspecified,
    SmallTeam,
    LargeTeam,
};

