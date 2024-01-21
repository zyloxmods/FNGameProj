#pragma once
#include "CoreMinimal.h"
#include "EMatchmakingInputSource.generated.h"

UENUM(BlueprintType)
enum class EMatchmakingInputSource : uint8 {
    Local,
    Remote,
    Pool,
};

