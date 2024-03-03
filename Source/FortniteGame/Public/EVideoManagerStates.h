#pragma once
#include "CoreMinimal.h"
#include "EVideoManagerStates.generated.h"

UENUM(BlueprintType)
enum class EVideoManagerStates : uint8 {
    INVALID,
    LoadingReplay,
    ScrubbingReplay,
    WaitingForShotSetup,
    WatchingShot,
    ExportingShot,
    PostExportedShot,
};

