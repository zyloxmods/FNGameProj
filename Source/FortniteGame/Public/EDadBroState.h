#pragma once
#include "CoreMinimal.h"
#include "EDadBroState.generated.h"

UENUM()
enum class EDadBroState : int32 {
    NotYet,
    Initializing,
    Active,
};

