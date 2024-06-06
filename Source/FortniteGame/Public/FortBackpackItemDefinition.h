#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortBackpackItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortBackpackItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    UFortBackpackItemDefinition(const FObjectInitializer& ObjectInitializer);
};

