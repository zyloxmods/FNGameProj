#pragma once
#include "CoreMinimal.h"
#include "EQueueActionType.generated.h"

UENUM(BlueprintType)
enum class EQueueActionType : uint8 {
    Plot,
    ZoneCleanup,
    EnvironmentActorRestoration,
};

