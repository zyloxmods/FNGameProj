#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Pawn.h"
#include "ReplicatedPhysicsPawnState.h"
#include "VehicleSafeTeleportInfo.h"
#include "FortPhysicsPawn.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortPhysicsPawn : public APawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SafeTeleportInfo, meta=(AllowPrivateAccess=true))
    FVehicleSafeTeleportInfo SafeTeleportInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GravityMultiplier, meta=(AllowPrivateAccess=true))
    float GravityMultiplier;
    
public:
    AFortPhysicsPawn();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerUpdateStateSync(const TArray<uint8>& StateSyncData);
    
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerMove(FReplicatedPhysicsPawnState InState);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeTeleportInfo();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GravityMultiplier();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void ClientBroadcastHitDetection(APawn* ImpulseInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints);
    
    UFUNCTION(Client, Unreliable)
    void ClientAckGoodMove(uint32 MoveId);
    
};

