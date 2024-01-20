#pragma once
#include "CoreMinimal.h"
#include "EFortGameplayAbilityMontageSectionToPlay.generated.h"

UENUM(BlueprintType)
enum class EFortGameplayAbilityMontageSectionToPlay : uint8 {
    FirstSection,
    RandomSection,
    TestedRandomSection,
};

