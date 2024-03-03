#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayStateMachineArray.h"
#include "GameplayStateMachineManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GAMEPLAYSTATEMACHINE_API UGameplayStateMachineManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FGameplayStateMachineArray StateMachineList;
    
public:
    UGameplayStateMachineManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
};

