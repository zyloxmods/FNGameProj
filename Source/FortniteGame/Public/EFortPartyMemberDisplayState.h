#pragma once
#include "CoreMinimal.h"
#include "EFortPartyMemberDisplayState.generated.h"

UENUM(BlueprintType)
enum class EFortPartyMemberDisplayState : uint8 {
    Open,
    Connecting,
    Connected,
    Max,
};

