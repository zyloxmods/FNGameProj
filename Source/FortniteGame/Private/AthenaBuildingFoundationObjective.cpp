#include "AthenaBuildingFoundationObjective.h"
#include "Net/UnrealNetwork.h"


void AAthenaBuildingFoundationObjective::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AAthenaBuildingFoundationObjective, CurrentHealth);
    DOREPLIFETIME(AAthenaBuildingFoundationObjective, MaxHealth);
}

AAthenaBuildingFoundationObjective::AAthenaBuildingFoundationObjective() {
    CurrentHealth = 1;
    MaxHealth = 1;
}

