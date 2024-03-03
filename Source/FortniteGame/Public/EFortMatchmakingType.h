#pragma once
#include "CoreMinimal.h"
#include "EFortMatchmakingType.generated.h"

UENUM(BlueprintType)
enum class EFortMatchmakingType : uint8 {
    Gathering,
    CriticalMission,
    QuickPlay,
    Session,
};

