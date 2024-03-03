#pragma once
#include "CoreMinimal.h"
#include "EPortalLinkCodeLockStatus.generated.h"

UENUM(BlueprintType)
enum class EPortalLinkCodeLockStatus : uint8 {
    Unlocked_NotSet,
    Unlocked,
    Locked,
};

