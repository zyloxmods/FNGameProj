#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameStateComponent.h"
#include "FortDataTrackerComponentRegisteredDelegate.h"
#include "FortDataTrackerComponentUnRegisteredDelegate.h"
#include "FortGameplayDataTrackerComponentManager.generated.h"

class AActor;
class UFortGameplayDataTrackerComponent;
class UFortGameplayDataTrackerComponentManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGameplayDataTrackerComponentManager : public UGameStateComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDataTrackerComponentRegistered OnDataTrackerComponentRegistered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortDataTrackerComponentUnRegistered OnDataTrackerComponentUnRegistered;
    
public:
    UFortGameplayDataTrackerComponentManager();
    UFUNCTION(BlueprintCallable)
    void UnRegisterTrackedStateActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void SetTrackedActorState(AActor* Actor, const FGameplayTag& CurrentState);
    
    UFUNCTION(BlueprintCallable)
    void RegisterTrackedStateActor(AActor* Actor, const FGameplayTag& InitialState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTrackedActorDestroyed(AActor* DestroyedActor);
    
public:
    UFUNCTION(BlueprintCallable)
    void GetRegisteredDataTrackerComponents(TArray<UFortGameplayDataTrackerComponent*>& OutDataTrackerComponents);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortGameplayDataTrackerComponentManager* GetCurrent(UObject* WorldContextObject);
    
};

