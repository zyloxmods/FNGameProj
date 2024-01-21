#pragma once
#include "CoreMinimal.h"
#include "FortBTDecorator_QueryGameplayAbility.h"
#include "FortBTDecorator_GameplayAbility_CanActivate.generated.h"

UCLASS(Blueprintable)
class UFortBTDecorator_GameplayAbility_CanActivate : public UFortBTDecorator_QueryGameplayAbility {
    GENERATED_BODY()
public:
    UFortBTDecorator_GameplayAbility_CanActivate();
};

