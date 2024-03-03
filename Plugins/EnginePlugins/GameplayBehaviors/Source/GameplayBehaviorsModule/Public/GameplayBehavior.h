#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTaskOwnerInterface.h"
#include "GameplayBehavior.generated.h"

class AActor;
class ACharacter;
class APawn;
class UGameplayBehaviorConfig;
class UGameplayTask;

UCLASS(Abstract, Blueprintable)
class GAMEPLAYBEHAVIORSMODULE_API UGameplayBehavior : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ActionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> RelevantActors;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGameplayTask*> ActiveTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* TransientAvatar;
    
public:
    UGameplayBehavior();
    UFUNCTION(BlueprintCallable)
    void K2_TriggerBehavior(AActor* Avatar, UGameplayBehaviorConfig* Config);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTriggeredPawn(APawn* Avatar, const UGameplayBehaviorConfig* Config);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTriggeredCharacter(ACharacter* Avatar, const UGameplayBehaviorConfig* Config);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnTriggered(AActor* Avatar, const UGameplayBehaviorConfig* Config);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFinishedPawn(APawn* Avatar, bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFinishedCharacter(ACharacter* Avatar, bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnFinished(AActor* Avatar, bool bWasInterrupted);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 K2_GetNextActorIndexInSequence(int32 CurrentIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void K2_EndBehavior(AActor* Avatar);
    
    UFUNCTION(BlueprintCallable)
    void K2_AbortBehavior(AActor* Avatar);
    
    
    // Fix for true pure virtual functions not being implemented
};

