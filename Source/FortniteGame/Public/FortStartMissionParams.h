#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortStartMissionParams.generated.h"

UCLASS(Blueprintable)
class UFortStartMissionParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UFortStartMissionParams();
};

