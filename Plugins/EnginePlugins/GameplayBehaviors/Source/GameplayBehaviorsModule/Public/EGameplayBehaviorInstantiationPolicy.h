#pragma once
#include "CoreMinimal.h"
#include "EGameplayBehaviorInstantiationPolicy.generated.h"

UENUM(BlueprintType)
enum class EGameplayBehaviorInstantiationPolicy : uint8 {
    Instantiate,
    ConditionallyInstantiate,
    DontInstantiate,
};

