#include "FortConstructionSet.h"
#include "Net/UnrealNetwork.h"

void UFortConstructionSet::OnRep_TrapReloadSpeed() {
}

void UFortConstructionSet::OnRep_TrapMaxDurability() {
}

void UFortConstructionSet::OnRep_TrapHealingSource() {
}

void UFortConstructionSet::OnRep_TrapDiceCritMultiplier() {
}

void UFortConstructionSet::OnRep_TrapDiceCritChance() {
}

void UFortConstructionSet::OnRep_TrapBaseDamage() {
}

void UFortConstructionSet::OnRep_TrapArmSpeed() {
}

void UFortConstructionSet::OnRep_RepairSpeed() {
}

void UFortConstructionSet::OnRep_RepairCost() {
}

void UFortConstructionSet::OnRep_MaxBuildLevel() {
}

void UFortConstructionSet::OnRep_BuildSpeed() {
}

void UFortConstructionSet::OnRep_BuildingSkill() {
}

void UFortConstructionSet::OnRep_BuildCost() {
}

void UFortConstructionSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortConstructionSet, BuildSpeed);
    DOREPLIFETIME(UFortConstructionSet, RepairSpeed);
    DOREPLIFETIME(UFortConstructionSet, BuildCost);
    DOREPLIFETIME(UFortConstructionSet, RepairCost);
    DOREPLIFETIME(UFortConstructionSet, MaxBuildLevel);
    DOREPLIFETIME(UFortConstructionSet, BuildingSkill);
    DOREPLIFETIME(UFortConstructionSet, TrapArmSpeed);
    DOREPLIFETIME(UFortConstructionSet, TrapReloadSpeed);
    DOREPLIFETIME(UFortConstructionSet, TrapBaseDamage);
    DOREPLIFETIME(UFortConstructionSet, TrapMaxDurability);
    DOREPLIFETIME(UFortConstructionSet, TrapDiceCritChance);
    DOREPLIFETIME(UFortConstructionSet, TrapDiceCritMultiplier);
    DOREPLIFETIME(UFortConstructionSet, TrapHealingSource);
}

UFortConstructionSet::UFortConstructionSet() {
}

