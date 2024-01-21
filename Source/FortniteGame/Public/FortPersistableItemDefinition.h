#pragma once
#include "CoreMinimal.h"
#include "FortItemDefinition.h"
#include "FortPersistableItemDefinition.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFortPersistableItemDefinition : public UFortItemDefinition {
    GENERATED_BODY()
public:
    UFortPersistableItemDefinition();
};

