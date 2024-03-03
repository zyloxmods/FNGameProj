#pragma once
#include "CoreMinimal.h"
#include "ESpawnPointState.generated.h"

UENUM(BlueprintType)
enum class ESpawnPointState : uint8 {
    Inactive,
    Active_CarryObjectInRange,
    Active_CarryObjectOutOfRange,
    IntelCaptured,
    IntelDownloaded,
};

