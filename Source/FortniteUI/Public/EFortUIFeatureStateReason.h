#pragma once
#include "CoreMinimal.h"
#include "EFortUIFeatureStateReason.generated.h"

UENUM(BlueprintType)
enum class EFortUIFeatureStateReason : uint8 {
    Default,
    Tutorial,
    ContentInstall,
    AccountRestrictions,
    Platform,
    SeasonOrEventNotActive,
    NoPlayerController,
    UnexpectedFeature,
    Invalid,
};

