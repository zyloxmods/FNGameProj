#pragma once
#include "CoreMinimal.h"
#include "AbilityTask.h"
#include "MoveToLocationDelegateDelegate2.h"
#include "FortAbilityTask_Sprint.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortAbilityTask_Sprint : public UAbilityTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMoveToLocationDelegate OnTargetLocationReached;
    
    UFortAbilityTask_Sprint();
};

