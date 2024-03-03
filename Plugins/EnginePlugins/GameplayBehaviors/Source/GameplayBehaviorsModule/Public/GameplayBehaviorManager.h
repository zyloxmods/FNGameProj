#pragma once
#include "CoreMinimal.h"
#include "AISubsystem.h"
#include "AgentGameplayBehaviors.h"
#include "GameplayBehaviorManager.generated.h"

class AActor;

UCLASS(Blueprintable, Transient, Config=Game)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehaviorManager : public UAISubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AActor*, FAgentGameplayBehaviors> AgentGameplayBehaviors;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateIfMissing: 1;
    
public:
    UGameplayBehaviorManager();
};

