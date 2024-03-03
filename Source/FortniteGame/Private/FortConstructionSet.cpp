#include "FortConstructionSet.h"
#include "Net/UnrealNetwork.h"

void UFortConstructionSet::OnRep_TrapReloadSpeed(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_TrapMaxDurability(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_TrapHealingSource(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_TrapDiceCritMultiplier(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_TrapDiceCritChance(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_TrapBaseDamage(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_TrapArmSpeed(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_RepairSpeed(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_RepairCost(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_MaxBuildLevel(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_BuildSpeed(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_BuildingSkill(const FFortGameplayAttributeData& OldValue) {
}

void UFortConstructionSet::OnRep_BuildCost(const FFortGameplayAttributeData& OldValue) {
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

