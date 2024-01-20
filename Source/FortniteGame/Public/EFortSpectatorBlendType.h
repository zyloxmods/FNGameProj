#pragma once
#include "CoreMinimal.h"
#include "EFortSpectatorBlendType.generated.h"

UENUM(BlueprintType)
enum class EFortSpectatorBlendType : uint8 {
    None,
    Orbit,
    Default,
};

