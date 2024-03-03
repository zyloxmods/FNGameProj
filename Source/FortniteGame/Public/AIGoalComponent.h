#pragma once
#include "CoreMinimal.h"
#include "GameFrameworkComponent.h"
#include "AIGoalComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAIGoalComponent : public UGameFrameworkComponent {
    GENERATED_BODY()
public:
    UAIGoalComponent();
};

