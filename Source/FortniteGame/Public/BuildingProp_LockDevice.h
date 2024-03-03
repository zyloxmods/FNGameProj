#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "EFortMinigameState.h"
#include "ELockState.h"
#include "LockStateChangeEventDelegate.h"
#include "LockableObjectChangeEventDelegate.h"
#include "BuildingProp_LockDevice.generated.h"

class AActor;
class ABuildingActor;
class AController;
class AFortMinigame;
class UBoxComponent;

UCLASS(Blueprintable)
class ABuildingProp_LockDevice : public ABuildingProp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockableObjectChangeEvent OnLockableActorChange;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLockStateChangeEvent OnLockStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBoxComponent*> InteractionCollisionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchAreaSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LockableObject, meta=(AllowPrivateAccess=true))
    AActor* LockableObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CurrentLockState, meta=(AllowPrivateAccess=true))
    ELockState CurrentLockState;
    
public:
    ABuildingProp_LockDevice();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void UnlockObject(AController* ControllerInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleOpenState(AController* ControllerInstigator);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleLockedState(AController* ControllerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void SetHighLightToLockableActor(ABuildingActor* BuildingActor, bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Open(AController* ControllerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LockableObject();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentLockState();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LockObject(AController* ControllerInstigator);
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState NewMinigameState);
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameEnded();
    
    UFUNCTION(BlueprintCallable)
    void HandleLockableObjectDestruction(AActor* ActorDestroyed);
    
    UFUNCTION(BlueprintCallable)
    AActor* FindLockableActor();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Close(AController* ControllerInstigator);
    
};

