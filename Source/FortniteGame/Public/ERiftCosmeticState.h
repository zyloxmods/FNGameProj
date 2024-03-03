#pragma once
#include "CoreMinimal.h"
#include "ERiftCosmeticState.generated.h"

UENUM(BlueprintType)
enum class ERiftCosmeticState : uint8 {
    None,
    Intro,
    Idle,
    RampUp,
    ShouldDie,
};

