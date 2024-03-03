#pragma once
#include "CoreMinimal.h"
#include "EFortStartupPhase.generated.h"

UENUM(BlueprintType)
enum class EFortStartupPhase : uint8 {
    InitializingEngine,
    EarlyStartupLoading,
    EarlyStartupFinished,
    GameStartupLoading,
    GameStartupFinished,
    Invalid,
    Count = 0x5,
};

