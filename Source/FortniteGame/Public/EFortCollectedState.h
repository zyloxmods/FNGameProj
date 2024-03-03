#pragma once
#include "CoreMinimal.h"
#include "EFortCollectedState.generated.h"

UENUM(BlueprintType)
enum class EFortCollectedState : uint8 {
    Unknown,
    New,
    Known,
    NewlyCollected,
    Collected,
    NewBest,
    NewRecord,
};

