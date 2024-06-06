#include "PapayaServerMigrationComponent.h"
#include "Net/UnrealNetwork.h"

void UPapayaServerMigrationComponent::OnRep_LastRequestedTimeForMigrationTimerPushback() {
}

void UPapayaServerMigrationComponent::OnGameStateReady(AGameStateBase* GameState) {
}

void UPapayaServerMigrationComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UPapayaServerMigrationComponent, LastRequestedTimeForMigrationTimerPushback);
}

UPapayaServerMigrationComponent::UPapayaServerMigrationComponent() {
    LastRequestedTimeForMigrationTimerPushback = 1;
}

