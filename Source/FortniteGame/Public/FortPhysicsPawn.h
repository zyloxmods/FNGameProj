#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "ReplicatedPhysicsPawnState.h"
#include "FortPhysicsPawn.generated.h"

UCLASS(Blueprintable)
class AFortPhysicsPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SafeTeleportLocation, meta=(AllowPrivateAccess=true))
    FVector SafeTeleportLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GravityMultiplier, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
public:
    AFortPhysicsPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateStateSync(const TArray<uint8>& StateSyncData);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable, WithValidation)
    void ServerUpdatePhysicsParams(FReplicatedPhysicsPawnState InState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeTeleportLocation();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GravityMultiplier();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientBroadcastHitDetection(APawn* ImpulseInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints);
    
    UFUNCTION(Client, Reliable)
    void ClientAckMove(uint32 MoveId);
    
};

