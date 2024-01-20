#include "FortBuildingTrapSet.h"
#include "Net/UnrealNetwork.h"

void UFortBuildingTrapSet::OnRep_Durability() {
}

void UFortBuildingTrapSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortBuildingTrapSet, Durability);
    DOREPLIFETIME(UFortBuildingTrapSet, MaxDurability);
    DOREPLIFETIME(UFortBuildingTrapSet, DurabilityCostPerFire);
    DOREPLIFETIME(UFortBuildingTrapSet, ArmTime);
    DOREPLIFETIME(UFortBuildingTrapSet, ReloadTime);
}

UFortBuildingTrapSet::UFortBuildingTrapSet() {
}

