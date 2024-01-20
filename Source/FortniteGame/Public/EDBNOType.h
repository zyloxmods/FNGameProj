#pragma once
#include "CoreMinimal.h"
#include "EDBNOType.generated.h"

UENUM(BlueprintType)
enum class EDBNOType : uint8 {
    On,
    Off,
    NotWhenRespawning,
};

