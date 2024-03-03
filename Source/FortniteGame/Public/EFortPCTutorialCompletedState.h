#pragma once
#include "CoreMinimal.h"
#include "EFortPCTutorialCompletedState.generated.h"

UENUM(BlueprintType)
enum class EFortPCTutorialCompletedState : uint8 {
    Unknown,
    Incomplete,
    Complete,
};

