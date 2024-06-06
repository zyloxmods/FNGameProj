#pragma once
#include "CoreMinimal.h"
#include "FortQuestItemDefinition.h"
#include "AthenaChallengeBundleQuestDefinition.generated.h"

UCLASS(Blueprintable)
class UAthenaChallengeBundleQuestDefinition : public UFortQuestItemDefinition {
    GENERATED_BODY()
public:
    UAthenaChallengeBundleQuestDefinition(const FObjectInitializer& ObjectInitializer);
};

