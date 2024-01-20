#pragma once
#include "CoreMinimal.h"
#include "ERespawnRequirements.generated.h"

UENUM(BlueprintType)
enum class ERespawnRequirements : uint8 {
    RespawnOnly,
    NoRespawnOnly,
    Both,
};

