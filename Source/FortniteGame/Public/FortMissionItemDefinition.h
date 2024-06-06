#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortMissionItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortMissionItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UFortMissionItemDefinition(const FObjectInitializer& ObjectInitializer);
};

