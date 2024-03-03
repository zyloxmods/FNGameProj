#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "FortAthenaTutorialBase.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorialBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer DefaultHUDElementTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* CameraStartPositionActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bExecuting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 CurrentStepIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TrackedActor, meta=(AllowPrivateAccess=true))
    AActor* CurrentTrackedActor;
    
public:
    AFortAthenaTutorialBase();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, NetMulticast, Reliable)
    void SetEasyInteractIconActor(AActor* TrackedActor);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnStopTutorial_Client();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void OnStartTutorial_Client();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TrackedActor();
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void OnClientStepCompleted_Server(int32 StepIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExecuting() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ExecuteTutorialStep_Client(int32 StepIndex);
    
};

