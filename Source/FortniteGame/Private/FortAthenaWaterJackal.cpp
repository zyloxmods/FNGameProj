#include "FortAthenaWaterJackal.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaWaterJackal::OnRep_ReplicatedAttachState() {
}

void AFortAthenaWaterJackal::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaWaterJackal, ReplicatedAttachState);
}

AFortAthenaWaterJackal::AFortAthenaWaterJackal() {
    FortWaterJackalVehicleConfigsClass = NULL;
    FortWaterJackalVehicleConfigs = NULL;
}

