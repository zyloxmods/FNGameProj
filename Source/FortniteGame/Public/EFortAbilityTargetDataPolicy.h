#pragma once
#include "CoreMinimal.h"
#include "EFortAbilityTargetDataPolicy.generated.h"

UENUM(BlueprintType)
enum class EFortAbilityTargetDataPolicy : uint8 {
    ReplicateToServer,
    SimulateOnServer,
};

