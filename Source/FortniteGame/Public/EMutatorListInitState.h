#pragma once
#include "CoreMinimal.h"
#include "EMutatorListInitState.generated.h"

UENUM()
enum class EMutatorListInitState : int32 {
    Default,
    Enabled,
    Disabled,
};

