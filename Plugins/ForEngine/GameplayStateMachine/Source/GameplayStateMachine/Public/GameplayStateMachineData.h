#pragma once
#include "CoreMinimal.h"
#include "GameplayStateMachineData.generated.h"

class UGameplayStateMachine;

USTRUCT(BlueprintType)
struct FGameplayStateMachineData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachine* StateMachine;
    
    GAMEPLAYSTATEMACHINE_API FGameplayStateMachineData();
};

