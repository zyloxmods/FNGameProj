#pragma once
#include "CoreMinimal.h"
#include "EAthenaAITelemetryEventType.generated.h"

UENUM(BlueprintType)
enum class EAthenaAITelemetryEventType : uint8 {
    Spawn,
    Despawn,
};

