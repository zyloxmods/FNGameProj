#include "FortPlayerAttrSet.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerAttrSet::OnRep_Tech_Team(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_StaminaRegenRate(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_StaminaRegenDelay(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_StaminaCost(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_Stamina(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_SprintCost(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_ResurrectTeammateDuration(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_ResourceHarvesting(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_Resistance_Team(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_Offense_Team(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_MaxStamina(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_ItemRegenMaxStack(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_ItemRegenCooldown(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_ItemMaxStack(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_HarvestingTool(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_Fortitude_Team(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_ExtraLives(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_DoubleLootRollChance(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_DoubleItemLootChance(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_DoubleCraftChance(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_CraftItemLevelBonusMin(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_CraftItemLevelBonusMax(const FFortGameplayAttributeData& OldValue) {
}

void UFortPlayerAttrSet::OnRep_CraftingTimeMultiplier(const FFortGameplayAttributeData& OldValue) {
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
    DOREPLIFETIME(UFortPlayerAttrSet, TurboBuildFirstInterval);
    DOREPLIFETIME(UFortPlayerAttrSet, TurboBuildInterval);
}

UFortPlayerAttrSet::UFortPlayerAttrSet() {
}

