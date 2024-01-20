#include "AthenaGoosePickup.h"
#include "Net/UnrealNetwork.h"


void AAthenaGoosePickup::OnStartDespawnWarning_Client_Implementation() {
}

void AAthenaGoosePickup::OnRep_PickupState() {
}

void AAthenaGoosePickup::OnRep_DisplayIndex() {
}

void AAthenaGoosePickup::OnRep_bIsDespawning() {
}

void AAthenaGoosePickup::OnImpactedByPlane_Server_Implementation() {
}

void AAthenaGoosePickup::OnImpactedByPlane_Client_Implementation() {
}

void AAthenaGoosePickup::OnFalling_Server_Implementation() {
}

void AAthenaGoosePickup::OnFalling_Client_Implementation() {
}

void AAthenaGoosePickup::OnDeployed_Server_Implementation() {
}

void AAthenaGoosePickup::OnDeployed_Client_Implementation() {
}

void AAthenaGoosePickup::OnCollide(AActor* CollidingActor) {
}

void AAthenaGoosePickup::DeployTimerUp_Server_Implementation() {
}

void AAthenaGoosePickup::DeployTimerUp_Client_Implementation() {
}

void AAthenaGoosePickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaGoosePickup, PickupState);
    DOREPLIFETIME(AAthenaGoosePickup, bIsDespawning);
    DOREPLIFETIME(AAthenaGoosePickup, DisplayIndex);
    DOREPLIFETIME(AAthenaGoosePickup, DeployHeight);
}

AAthenaGoosePickup::AAthenaGoosePickup() {
    this->PickupState = EGoosePickupState::None;
    this->bIsDespawning = false;
    this->DisplayIndex = -1;
    this->DeployHeight = -1.00f;
}

