#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortCollectedResourceItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortCollectedResourceItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    UFortCollectedResourceItemDefinition(const FObjectInitializer& ObjectInitializer);
};

