#pragma once
#include "CoreMinimal.h"
#include "ESpectatorQueueType.generated.h"

UENUM(BlueprintType)
enum class ESpectatorQueueType : uint8 {
    Invalid,
    Player,
    BroadcastSpectator,
};

