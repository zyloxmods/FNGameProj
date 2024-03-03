#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "FortBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UFortBehaviorTreeComponent();
};

