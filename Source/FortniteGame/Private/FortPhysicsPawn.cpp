#include "FortPhysicsPawn.h"
#include "Net/UnrealNetwork.h"

void AFortPhysicsPawn::ServerUpdateStateSync_Implementation(const TArray<uint8>& StateSyncData) {
}

void AFortPhysicsPawn::ServerMove_Implementation(FReplicatedPhysicsPawnState InState) {
}

void AFortPhysicsPawn::OnRep_SafeTeleportInfo() {
}

void AFortPhysicsPawn::OnRep_GravityMultiplier() {
}

void AFortPhysicsPawn::ClientBroadcastHitDetection_Implementation(APawn* ImpulseInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints) {
}

void AFortPhysicsPawn::ClientAckGoodMove_Implementation(uint32 MoveId) {
}

void AFortPhysicsPawn::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPhysicsPawn, SafeTeleportInfo);
    DOREPLIFETIME(AFortPhysicsPawn, GravityMultiplier);
}

AFortPhysicsPawn::AFortPhysicsPawn() {
    GravityMultiplier = 1;
}

