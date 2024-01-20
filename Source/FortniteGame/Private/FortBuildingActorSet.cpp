#include "FortBuildingActorSet.h"
#include "Net/UnrealNetwork.h"

void UFortBuildingActorSet::OnRep_RepairTime() {
}

void UFortBuildingActorSet::OnRep_BuildTime() {
}

void UFortBuildingActorSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortBuildingActorSet, BuildTime);
    DOREPLIFETIME(UFortBuildingActorSet, RepairTime);
}

UFortBuildingActorSet::UFortBuildingActorSet() {
}

