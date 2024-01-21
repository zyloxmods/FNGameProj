#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortShutdownParams.generated.h"

UCLASS(Blueprintable)
class UFortShutdownParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UFortShutdownParams();
};

