#pragma once
#include "CoreMinimal.h"
#include "ESubGameAccessReason.generated.h"

UENUM(BlueprintType)
enum class ESubGameAccessReason : uint8 {
    NoAccess,
    OpenAccess,
    TokenItemAccess,
    XboxHomeSharingAccess,
    XboxServiceOutageAccess,
    LimitedAccess,
};

