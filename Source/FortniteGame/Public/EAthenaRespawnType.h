#pragma once
#include "CoreMinimal.h"
#include "EAthenaRespawnType.generated.h"

UENUM(BlueprintType)
enum class EAthenaRespawnType : uint8 {
    None,
    InfiniteRespawn,
    InfiniteRespawnExceptStorm,
};

