#pragma once
#include "CoreMinimal.h"
#include "ESynchronizedTeleportHealthAndShieldResetType.generated.h"

UENUM(BlueprintType)
enum class ESynchronizedTeleportHealthAndShieldResetType : uint8 {
    None,
    EvaluateHealthAndShieldMutators,
    MaxHealth,
};

