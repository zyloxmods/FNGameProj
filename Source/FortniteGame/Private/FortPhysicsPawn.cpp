#include "FortPhysicsPawn.h"
#include "Net/UnrealNetwork.h"

void AFortPhysicsPawn::ServerUpdateStateSync_Implementation(const TArray<uint8>& StateSyncData) {
}
bool AFortPhysicsPawn::ServerUpdateStateSync_Validate(const TArray<uint8>& StateSyncData) {
    return true;
}

void AFortPhysicsPawn::ServerUpdatePhysicsParams_Implementation(FReplicatedPhysicsPawnState InState) {
}
bool AFortPhysicsPawn::ServerUpdatePhysicsParams_Validate(FReplicatedPhysicsPawnState InState) {
    return true;
}

void AFortPhysicsPawn::OnRep_SafeTeleportLocation() {
}

void AFortPhysicsPawn::OnRep_GravityMultiplier() {
}

void AFortPhysicsPawn::ClientBroadcastHitDetection_Implementation(APawn* ImpulseInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints) {
}

void AFortPhysicsPawn::ClientAckMove_Implementation(uint32 MoveId) {
}

void AFortPhysicsPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsPawn, SafeTeleportLocation);
    DOREPLIFETIME(AFortPhysicsPawn, GravityMultiplier);
}

AFortPhysicsPawn::AFortPhysicsPawn() {
    this->GravityMultiplier = 1.00f;
}

