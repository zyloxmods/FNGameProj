#pragma once
#include "CoreMinimal.h"
#include "AgentGameplayBehaviors.generated.h"

class UGameplayBehavior;

USTRUCT(BlueprintType)
struct FAgentGameplayBehaviors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayBehavior*> Behaviors;
    
    GAMEPLAYBEHAVIORSMODULE_API FAgentGameplayBehaviors();
};

