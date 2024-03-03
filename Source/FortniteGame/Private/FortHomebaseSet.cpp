#include "FortHomebaseSet.h"
#include "Net/UnrealNetwork.h"

void UFortHomebaseSet::OnRep_WorldInventorySizeBonus(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_SupplyDrop_Magnitude(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_SupplyDrop_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_StorageInventorySizeBonus(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_ResearchPointMaxBonus(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_rate_per_second_collector_Token_collectionresource_nodegatetoken01(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics_Traps(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics_Ranged(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics_Melee(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Personnel(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Global(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Alterations(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_max_capacity_collector_Token_collectionresource_nodegatetoken01(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Manor_StructureCap(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Manor_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_Workshop_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_StructureCap(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_Storage_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_PermaniteCap(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_Medical_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_Armory_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_Keep_AmmoStash_Level(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::OnRep_InventorySizeBonus(const FFortGameplayAttributeData& OldValue) {
}

void UFortHomebaseSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortHomebaseSet, Keep_Level);
    DOREPLIFETIME(UFortHomebaseSet, Keep_AmmoStash_Level);
    DOREPLIFETIME(UFortHomebaseSet, Keep_Armory_Level);
    DOREPLIFETIME(UFortHomebaseSet, Keep_Medical_Level);
    DOREPLIFETIME(UFortHomebaseSet, Keep_Storage_Level);
    DOREPLIFETIME(UFortHomebaseSet, Keep_Workshop_Level);
    DOREPLIFETIME(UFortHomebaseSet, Keep_StructureCap);
    DOREPLIFETIME(UFortHomebaseSet, Keep_PermaniteCap);
    DOREPLIFETIME(UFortHomebaseSet, Manor_Level);
    DOREPLIFETIME(UFortHomebaseSet, Manor_StructureCap);
    DOREPLIFETIME(UFortHomebaseSet, InventorySizeBonus);
    DOREPLIFETIME(UFortHomebaseSet, WorldInventorySizeBonus);
    DOREPLIFETIME(UFortHomebaseSet, StorageInventorySizeBonus);
    DOREPLIFETIME(UFortHomebaseSet, ResearchPointMaxBonus);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Global);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Schematics);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Schematics_Ranged);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Schematics_Melee);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Schematics_Traps);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Personnel);
    DOREPLIFETIME(UFortHomebaseSet, MaxLevelBonus_Alterations);
    DOREPLIFETIME(UFortHomebaseSet, rate_per_second_collector_Token_collectionresource_nodegatetoken01);
    DOREPLIFETIME(UFortHomebaseSet, max_capacity_collector_Token_collectionresource_nodegatetoken01);
    DOREPLIFETIME(UFortHomebaseSet, SupplyDrop_Magnitude);
    DOREPLIFETIME(UFortHomebaseSet, SupplyDrop_Level);
}

UFortHomebaseSet::UFortHomebaseSet() {
}

