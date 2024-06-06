#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemDefinition.h"
#include "AthenaDailyQuestDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAthenaDailyQuestDefinition : public UFortQuestItemDefinition {
    GENERATED_BODY()
public:
    UAthenaDailyQuestDefinition(const FObjectInitializer& ObjectInitializer);
};

