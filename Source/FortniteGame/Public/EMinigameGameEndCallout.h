#pragma once
#include "CoreMinimal.h"
#include "EMinigameGameEndCallout.generated.h"

UENUM(BlueprintType)
enum class EMinigameGameEndCallout : uint8 {
    WinLose,
    Placement,
    Cooperative,
};

