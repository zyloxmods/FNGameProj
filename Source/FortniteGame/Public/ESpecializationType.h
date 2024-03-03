#pragma once
#include "CoreMinimal.h"
#include "ESpecializationType.generated.h"

UENUM(BlueprintType)
enum class ESpecializationType : uint8 {
    Tier1,
    Tier2,
    Tier3,
    Tier4,
    NumTiers,
};

