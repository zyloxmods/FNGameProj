#pragma once
#include "CoreMinimal.h"
#include "ECameraStateRestoreReason.generated.h"

UENUM(BlueprintType)
enum class ECameraStateRestoreReason : uint8 {
    Unknown,
    ChangedFollowTarget,
    ChangedCameraType,
    InvokedHotKey,
    Scrubbed,
    Restored,
    SpecialAction,
    MAX,
};

