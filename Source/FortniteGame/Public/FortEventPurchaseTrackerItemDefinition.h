#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortEventPurchaseTrackerItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortEventPurchaseTrackerItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortEventPurchaseTrackerItemDefinition(const FObjectInitializer& ObjectInitializer);
};

