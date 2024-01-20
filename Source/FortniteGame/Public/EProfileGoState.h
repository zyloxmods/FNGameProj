#pragma once
#include "CoreMinimal.h"
#include "EProfileGoState.generated.h"

UENUM(BlueprintType)
enum class EProfileGoState : uint8 {
    None,
    SettlingLocation,
    RunningCommands,
    CompletedScenario,
    Summary,
    Completed,
};

