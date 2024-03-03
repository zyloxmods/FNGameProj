#pragma once
#include "CoreMinimal.h"
#include "EFortPartyMemberReadyCheckStatus.generated.h"

UENUM(BlueprintType)
enum class EFortPartyMemberReadyCheckStatus : uint8 {
    None,
    InProgress,
    Complete,
    Canceled,
};

