#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortPlayerSurveyTokenItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortPlayerSurveyTokenItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortPlayerSurveyTokenItemDefinition(const FObjectInitializer& ObjectInitializer);
};

