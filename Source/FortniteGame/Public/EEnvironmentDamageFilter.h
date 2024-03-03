#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentDamageFilter.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentDamageFilter : uint8 {
    Off,
    PlayerBuiltOnly,
    All,
};

