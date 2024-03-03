#pragma once
#include "CoreMinimal.h"
#include "GameplayBehavior.h"
#include "GameplayBehavior_BehaviorTree.generated.h"

class AAIController;
class UBehaviorTree;

UCLASS(Blueprintable)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehavior_BehaviorTree : public UGameplayBehavior {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* PreviousBT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIController* AIController;
    
public:
    UGameplayBehavior_BehaviorTree();
};

