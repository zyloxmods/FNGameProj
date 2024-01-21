#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_GameplayTaskBase.h"
#include "GameplayTagContainer.h"
#include "FortBTTask_ExecuteGameplayAbility.generated.h"

UCLASS(Blueprintable)
class UFortBTTask_ExecuteGameplayAbility : public UBTTask_GameplayTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GameplayAbilityTag;
    
public:
    UFortBTTask_ExecuteGameplayAbility();
};

