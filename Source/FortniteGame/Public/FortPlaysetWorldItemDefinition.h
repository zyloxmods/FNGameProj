#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortPlaysetWorldItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortPlaysetWorldItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UFortPlaysetWorldItemDefinition(const FObjectInitializer& ObjectInitializer);
};

