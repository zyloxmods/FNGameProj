#pragma once
#include "CoreMinimal.h"
#include "ETouchState.generated.h"

UENUM(BlueprintType)
enum class ETouchState : uint8 {
    None,
    WaitingForStart,
    Started,
    Active,
    COUNT,
};

