#pragma once
#include "CoreMinimal.h"
#include "EWaxState.generated.h"

UENUM(BlueprintType)
enum class EWaxState : uint8 {
    None,
    SomewhatVisible,
    ModeratelyVisible,
    VeryVisible,
    Undeniable,
};

