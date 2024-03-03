#pragma once
#include "CoreMinimal.h"
#include "AIGoalComponent.h"
#include "FortAIGoalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAIGoalComponent : public UAIGoalComponent {
    GENERATED_BODY()
public:
    UFortAIGoalComponent();
};

