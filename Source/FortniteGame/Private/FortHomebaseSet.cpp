#include "FortHomebaseSet.h"
#include "Net/UnrealNetwork.h"

void UFortHomebaseSet::OnRep_WorldInventorySizeBonus() {
}

void UFortHomebaseSet::OnRep_SupplyDrop_Magnitude() {
}

void UFortHomebaseSet::OnRep_SupplyDrop_Level() {
}

void UFortHomebaseSet::OnRep_StorageInventorySizeBonus() {
}

void UFortHomebaseSet::OnRep_ResearchPointMaxBonus() {
}

void UFortHomebaseSet::OnRep_rate_per_second_collector_Token_collectionresource_nodegatetoken01() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics_Traps() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics_Ranged() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics_Melee() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Schematics() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Personnel() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Global() {
}

void UFortHomebaseSet::OnRep_MaxLevelBonus_Alterations() {
}

void UFortHomebaseSet::OnRep_max_capacity_collector_Token_collectionresource_nodegatetoken01() {
}

void UFortHomebaseSet::OnRep_Manor_StructureCap() {
}

void UFortHomebaseSet::OnRep_Manor_Level() {
}

void UFortHomebaseSet::OnRep_Keep_Workshop_Level() {
}

void UFortHomebaseSet::OnRep_Keep_StructureCap() {
}

void UFortHomebaseSet::OnRep_Keep_Storage_Level() {
}

void UFortHomebaseSet::OnRep_Keep_PermaniteCap() {
}

void UFortHomebaseSet::OnRep_Keep_Medical_Level() {
}

void UFortHomebaseSet::OnRep_Keep_Level() {
}

void UFortHomebaseSet::OnRep_Keep_Armory_Level() {
}

void UFortHomebaseSet::OnRep_Keep_AmmoStash_Level() {
}

void UFortHomebaseSet::OnRep_InventorySizeBonus() {
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

