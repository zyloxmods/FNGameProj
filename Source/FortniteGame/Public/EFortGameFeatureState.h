#pragma once
#include "CoreMinimal.h"
#include "EFortGameFeatureState.generated.h"

UENUM(BlueprintType)
enum class EFortGameFeatureState : uint8 {
    Unknown,
    Unavailable,
    Downloading,
    DownloadFailed,
    Available,
    Preloading,
    Preloaded,
    Loading,
    Loaded,
    Count = 0x8,
};

