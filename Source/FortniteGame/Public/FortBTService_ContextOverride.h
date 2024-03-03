#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "FortBTService_ContextOverride.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortBTService_ContextOverride : public UBTService {
    GENERATED_BODY()
public:
    UFortBTService_ContextOverride();
};

