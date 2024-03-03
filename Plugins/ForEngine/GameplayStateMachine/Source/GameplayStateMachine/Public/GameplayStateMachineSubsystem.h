#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "GameplayStateMachineData.h"
#include "GameplayStateMachineSubsystem.generated.h"

UCLASS(Blueprintable)
class GAMEPLAYSTATEMACHINE_API UGameplayStateMachineSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FGameplayStateMachineData> StateMachineMap;
    
public:
    UGameplayStateMachineSubsystem();
};

