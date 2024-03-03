#pragma once
#include "CoreMinimal.h"
#include "EInteractionBeingAttempted.generated.h"

UENUM(BlueprintType)
enum class EInteractionBeingAttempted : uint8 {
    FirstInteraction,
    SecondInteraction,
    AllInteraction,
};

