#pragma once
#include "CoreMinimal.h"
#include "EIslandInspectorState.generated.h"

UENUM(BlueprintType)
enum class EIslandInspectorState : uint8 {
    Initializing,
    Ready,
    AwaitingProcessCommand,
    ProcessingCommand,
};

