#pragma once
#include "CoreMinimal.h"
#include "EBadMatchType.generated.h"

UENUM(BlueprintType)
enum class EBadMatchType : uint8 {
    None,
    Ping,
    PacketLoss,
    NotMonitored,
};

