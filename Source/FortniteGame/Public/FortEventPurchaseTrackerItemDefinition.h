#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortEventPurchaseTrackerItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortEventPurchaseTrackerItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortEventPurchaseTrackerItemDefinition();
};

