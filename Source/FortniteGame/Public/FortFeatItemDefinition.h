#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemDefinition.h"
#include "FortFeatItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortFeatItemDefinition : public UFortQuestItemDefinition {
    GENERATED_BODY()
public:
    UFortFeatItemDefinition(const FObjectInitializer& ObjectInitializer);
};

