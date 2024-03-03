#pragma once
#include "CoreMinimal.h"
#include "EPerceptionState.generated.h"

UENUM(BlueprintType)
enum class EPerceptionState : uint8 {
    Threat_Seeing,
    Threat_LKP,
    Threat_Alerted,
    ObstacleIncoming,
    ObstacleBlockedBy,
    ObstacleDetectedTrap,
    Unknown,
    Count = 0x6,
    Threat_Count = 0x3,
    EPerceptionState_MAX = 0x7,
};

