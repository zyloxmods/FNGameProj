#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_BlackboardBase.h"
#include "FortBTDecorator_CanBeConsideredAirborne.generated.h"

UCLASS(Blueprintable)
class UFortBTDecorator_CanBeConsideredAirborne : public UBTDecorator_BlackboardBase {
    GENERATED_BODY()
public:
    UFortBTDecorator_CanBeConsideredAirborne();
};

