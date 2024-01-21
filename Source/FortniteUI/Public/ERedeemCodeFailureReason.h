#pragma once
#include "CoreMinimal.h"
#include "ERedeemCodeFailureReason.generated.h"

UENUM(BlueprintType)
enum class ERedeemCodeFailureReason : uint8 {
    InvalidCode,
    CodeAlreadyUsed,
    AlreadyHasAccess,
    FailedToGetItem,
    Unknown,
};

