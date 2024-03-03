#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentalItemEndReason.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentalItemEndReason : uint8 {
    None,
    PlayerExit,
    PlayerDeath,
    ObjectDestroyed,
};

