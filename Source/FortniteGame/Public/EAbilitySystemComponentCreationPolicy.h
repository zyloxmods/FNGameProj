#pragma once
#include "CoreMinimal.h"
#include "EAbilitySystemComponentCreationPolicy.generated.h"

UENUM(BlueprintType)
enum class EAbilitySystemComponentCreationPolicy : uint8 {
    Never,
    Lazy,
    Always,
};

