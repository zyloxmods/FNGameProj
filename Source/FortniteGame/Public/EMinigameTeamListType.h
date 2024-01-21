#pragma once
#include "CoreMinimal.h"
#include "EMinigameTeamListType.generated.h"

UENUM(BlueprintType)
enum class EMinigameTeamListType : uint8 {
    Blacklist,
    Whitelist,
};

