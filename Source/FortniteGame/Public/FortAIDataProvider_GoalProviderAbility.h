#pragma once
#include "CoreMinimal.h"
#include "FortAIDataProvider_Ability.h"
#include "FortAIDataProvider_GoalProviderAbility.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortAIDataProvider_GoalProviderAbility : public UFortAIDataProvider_Ability {
    GENERATED_BODY()
public:
    UFortAIDataProvider_GoalProviderAbility();
};

