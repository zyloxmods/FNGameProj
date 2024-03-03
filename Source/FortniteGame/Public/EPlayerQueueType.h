#pragma once
#include "CoreMinimal.h"
#include "EPlayerQueueType.generated.h"

UENUM(BlueprintType)
enum class EPlayerQueueType : uint8 {
    Player,
    BroadcastSpectator,
};

