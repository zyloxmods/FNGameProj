#pragma once
#include "CoreMinimal.h"
#include "ControllerComponent.h"
#include "OnPlayerQueuedToSpawnDelegate.h"
#include "ReplicatedSpawnInfo.h"
#include "PlayspaceControllerComponent_PlayerSpawning.generated.h"

class ACameraActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PLAYSPACESYSTEM_API UPlayspaceControllerComponent_PlayerSpawning : public UControllerComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerQueuedToSpawn OnPlayerQueuedToSpawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACameraActor* SpawnCameraActor;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bClientReadyForSpawning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ReplicatedSpawnInfo, meta=(AllowPrivateAccess=true))
    FReplicatedSpawnInfo ReplicatedSpawnInfo;
    
public:
    UPlayspaceControllerComponent_PlayerSpawning();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMarkReadyForSpawning();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedSpawnInfo();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FReplicatedSpawnInfo GetSpawnInfo() const;
    
};

