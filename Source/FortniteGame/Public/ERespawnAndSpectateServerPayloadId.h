#pragma once
#include "CoreMinimal.h"
#include "ERespawnAndSpectateServerPayloadId.generated.h"

UENUM(BlueprintType)
enum class ERespawnAndSpectateServerPayloadId : uint8 {
    SpectateTargetSelected,
    RespawnTargetSelected,
    SpectateAndRespawnTargetSelected,
};

