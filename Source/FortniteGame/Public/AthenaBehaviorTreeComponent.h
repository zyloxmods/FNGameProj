#pragma once
#include "CoreMinimal.h"
#include "FortBehaviorTreeComponent.h"
#include "AthenaBehaviorTreeComponent.generated.h"

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaBehaviorTreeComponent : public UFortBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UAthenaBehaviorTreeComponent();
};

