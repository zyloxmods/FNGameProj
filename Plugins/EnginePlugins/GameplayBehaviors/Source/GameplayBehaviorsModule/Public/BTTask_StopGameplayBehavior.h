#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Templates/SubclassOf.h"
#include "BTTask_StopGameplayBehavior.generated.h"

class UGameplayBehavior;

UCLASS(Blueprintable)
class GAMEPLAYBEHAVIORSMODULE_API UBTTask_StopGameplayBehavior : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayBehavior> BehaviorToStop;
    
public:
    UBTTask_StopGameplayBehavior();
};

