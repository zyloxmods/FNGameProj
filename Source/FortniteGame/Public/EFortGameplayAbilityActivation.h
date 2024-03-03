#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayAbilityActivation.generated.h"

UENUM(BlueprintType)
enum class EFortGameplayAbilityActivation : uint8 {
    Passive,
    Triggered,
    Active,
};

