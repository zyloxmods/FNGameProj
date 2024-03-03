#pragma once
#include "CoreMinimal.h"
#include "EBattleMapTimelineWidgetState.generated.h"

UENUM(BlueprintType)
enum class EBattleMapTimelineWidgetState : uint8 {
    None,
    HasNext,
    HasPrevious,
    IsInReplay = 0x4,
    CanBeScrubbed = 0x8,
    IsStreaming = 0x10,
    Invalid = 0x20,
};

