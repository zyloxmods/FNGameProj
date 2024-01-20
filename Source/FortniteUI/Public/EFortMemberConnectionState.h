#pragma once
#include "CoreMinimal.h"
#include "EFortMemberConnectionState.generated.h"

UENUM(BlueprintType)
enum class EFortMemberConnectionState : uint8 {
    Open,
    Connecting,
    Connected,
    Invalid,
};

