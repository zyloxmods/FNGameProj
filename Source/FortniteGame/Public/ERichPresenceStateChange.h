#pragma once
#include "CoreMinimal.h"
#include "ERichPresenceStateChange.generated.h"

UENUM(BlueprintType)
enum class ERichPresenceStateChange : uint8 {
    AutoUpdate,
    Idle,
    Active,
    Busy,
    NotBusy,
};

