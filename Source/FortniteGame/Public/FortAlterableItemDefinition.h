#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortAlterableItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortAlterableItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortAlterableItemDefinition(const FObjectInitializer& ObjectInitializer);
};

