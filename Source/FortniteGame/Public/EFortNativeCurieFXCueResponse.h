#pragma once
#include "CoreMinimal.h"
#include "EFortNativeCurieFXCueResponse.generated.h"

UENUM(BlueprintType)
enum class EFortNativeCurieFXCueResponse : uint8 {
    IgnoreCue,
    AllowCue,
    OverrideCue,
};

