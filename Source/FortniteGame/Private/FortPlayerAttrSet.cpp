#include "FortPlayerAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerAttrSet::OnRep_Tech_Team() {
}

void UFortPlayerAttrSet::OnRep_StaminaRegenRate() {
}

void UFortPlayerAttrSet::OnRep_StaminaRegenDelay() {
}

void UFortPlayerAttrSet::OnRep_StaminaCost() {
}

void UFortPlayerAttrSet::OnRep_Stamina() {
}

void UFortPlayerAttrSet::OnRep_SprintCost() {
}

void UFortPlayerAttrSet::OnRep_ResurrectTeammateDuration() {
}

void UFortPlayerAttrSet::OnRep_ResourceHarvesting() {
}

void UFortPlayerAttrSet::OnRep_Resistance_Team() {
}

void UFortPlayerAttrSet::OnRep_Offense_Team() {
}

void UFortPlayerAttrSet::OnRep_MaxStamina() {
}

void UFortPlayerAttrSet::OnRep_ItemRegenMaxStack() {
}

void UFortPlayerAttrSet::OnRep_ItemRegenCooldown() {
}

void UFortPlayerAttrSet::OnRep_ItemMaxStack() {
}

void UFortPlayerAttrSet::OnRep_HarvestingTool() {
}

void UFortPlayerAttrSet::OnRep_Fortitude_Team() {
}

void UFortPlayerAttrSet::OnRep_ExtraLives() {
}

void UFortPlayerAttrSet::OnRep_DoubleLootRollChance() {
}

void UFortPlayerAttrSet::OnRep_DoubleItemLootChance() {
}

void UFortPlayerAttrSet::OnRep_DoubleCraftChance() {
}

void UFortPlayerAttrSet::OnRep_CraftItemLevelBonusMin() {
}

void UFortPlayerAttrSet::OnRep_CraftItemLevelBonusMax() {
}

void UFortPlayerAttrSet::OnRep_CraftingTimeMultiplier() {
}

void UFortPlayerAttrSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerAttrSet, Stamina);
    DOREPLIFETIME(UFortPlayerAttrSet, StaminaRegenRate);
    DOREPLIFETIME(UFortPlayerAttrSet, StaminaRegenDelay);
    DOREPLIFETIME(UFortPlayerAttrSet, MaxStamina);
    DOREPLIFETIME(UFortPlayerAttrSet, StaminaCost);
    DOREPLIFETIME(UFortPlayerAttrSet, SprintCost);
    DOREPLIFETIME(UFortPlayerAttrSet, ItemRegenMaxStack);
    DOREPLIFETIME(UFortPlayerAttrSet, ItemRegenCooldown);
    DOREPLIFETIME(UFortPlayerAttrSet, ItemMaxStack);
    DOREPLIFETIME(UFortPlayerAttrSet, DoubleLootRollChance);
    DOREPLIFETIME(UFortPlayerAttrSet, DoubleItemLootChance);
    DOREPLIFETIME(UFortPlayerAttrSet, DoubleCraftChance);
    DOREPLIFETIME(UFortPlayerAttrSet, CraftingTimeMultiplier);
    DOREPLIFETIME(UFortPlayerAttrSet, CraftItemLevelBonusMin);
    DOREPLIFETIME(UFortPlayerAttrSet, CraftItemLevelBonusMax);
    DOREPLIFETIME(UFortPlayerAttrSet, ResourceHarvesting);
    DOREPLIFETIME(UFortPlayerAttrSet, HarvestingTool);
    DOREPLIFETIME(UFortPlayerAttrSet, ExtraLives);
    DOREPLIFETIME(UFortPlayerAttrSet, ResurrectTeammateDuration);
    DOREPLIFETIME(UFortPlayerAttrSet, Fortitude_Team);
    DOREPLIFETIME(UFortPlayerAttrSet, Offense_Team);
    DOREPLIFETIME(UFortPlayerAttrSet, Tech_Team);
    DOREPLIFETIME(UFortPlayerAttrSet, Resistance_Team);
}

UFortPlayerAttrSet::UFortPlayerAttrSet() {
}

