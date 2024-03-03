#pragma once
#include "CoreMinimal.h"
#include "EPortalLinkCodeLockMode.generated.h"

UENUM(BlueprintType)
enum class EPortalLinkCodeLockMode : uint8 {
    NeverLocked,
    WindowLocked,
    AlwaysLocked,
};

