#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayStateMachineItem.h"
#include "GameplayStateMachineArray.generated.h"

class UGameplayStateMachineManager;

USTRUCT(BlueprintType)
struct GAMEPLAYSTATEMACHINE_API FGameplayStateMachineArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UGameplayStateMachineManager* StateMachineManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FGameplayStateMachineItem> StateMachineItems;
    
public:
    FGameplayStateMachineArray();
};

