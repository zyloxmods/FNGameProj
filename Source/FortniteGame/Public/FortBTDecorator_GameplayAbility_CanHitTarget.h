#pragma once
#include "CoreMinimal.h"
#include "FortBTDecorator_QueryGameplayAbility.h"
#include "FortBTDecorator_GameplayAbility_CanHitTarget.generated.h"

UCLASS(Blueprintable)
class UFortBTDecorator_GameplayAbility_CanHitTarget : public UFortBTDecorator_QueryGameplayAbility {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 UseIdealYawRotationToTarget: 1;
    
    UFortBTDecorator_GameplayAbility_CanHitTarget();
};

