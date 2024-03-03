#pragma once
#include "CoreMinimal.h"
#include "EFortAthenaTutorial_StandaloneStep.generated.h"

UENUM(BlueprintType)
enum class EFortAthenaTutorial_StandaloneStep : uint8 {
    None,
    HealingInterrupted,
    Count,
    EFortAthenaTutorial_MAX UMETA(Hidden),
};

