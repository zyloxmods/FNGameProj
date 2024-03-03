#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingSourceV2.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingSourceV2 : uint8 {
    None,
    AthenaMatchmakingWidget,
    ActivityMatchmakingWidget,
    ReadyUpScreenWidget,
    Unknown,
};

