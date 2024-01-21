#pragma once
#include "CoreMinimal.h"
#include "EFortFrontEndFeatureStateReason.generated.h"

UENUM(BlueprintType)
enum class EFortFrontEndFeatureStateReason : uint8 {
    Default,
    NoHeroes,
    Tutorial,
    BROnly,
    NoPlayerController,
    UnexpectedFeature,
    Invalid,
};

