#pragma once
#include "CoreMinimal.h"
#include "FortAIComponent_Telemetry.h"
#include "FortSpicySakeComponent_Telemetry.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortSpicySakeComponent_Telemetry : public UFortAIComponent_Telemetry {
    GENERATED_BODY()
public:
    UFortSpicySakeComponent_Telemetry();
};

