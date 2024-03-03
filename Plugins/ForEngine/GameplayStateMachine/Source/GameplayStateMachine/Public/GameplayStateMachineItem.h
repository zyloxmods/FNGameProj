#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayStateMachineItem.generated.h"

class UGameplayStateMachine;

USTRUCT(BlueprintType)
struct GAMEPLAYSTATEMACHINE_API FGameplayStateMachineItem : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachine* StateMachine;
    
public:
    FGameplayStateMachineItem();
};

