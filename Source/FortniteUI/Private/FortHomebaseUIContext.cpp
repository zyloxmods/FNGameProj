#include "FortHomebaseUIContext.h"

void UFortHomebaseUIContext::SetShouldAutoSlotSurvivorSquads(const bool Value) {
}

void UFortHomebaseUIContext::SetCurrentlyViewedHeroLoadout(const UFortCampaignHeroLoadoutItem* Loadout) {
}

void UFortHomebaseUIContext::SetCurrentlyFocusedHeroLoadoutSlotName(const FName SlotName) {
}

bool UFortHomebaseUIContext::IsHeroLoadoutSlotUnlocked(const FName SlotName, const UFortCampaignHeroLoadoutItem* Loadout) const {
    return false;
}

bool UFortHomebaseUIContext::IsAnySquadSlotUnlocked(const FName SquadId) const {
    return false;
}

void UFortHomebaseUIContext::HandleDifferentHeroLoadoutActivated(UFortMcpProfileCampaign* Profile) {
}

void UFortHomebaseUIContext::GetWorkerSetBonusEffectModifiers(const FGameplayTag& SetBonusTag, TArray<FFortAttributeModifierDisplayData>& OutModifiers) const {
}

UFortQuestItemDefinition* UFortHomebaseUIContext::GetUnlockingQuestDefinitionForSquadSlot(const FName SquadName, const int32 SlotIndex) const {
    return NULL;
}

UFortQuestItemDefinition* UFortHomebaseUIContext::GetUnlockingQuestDefinitionForHeroLoadoutSlot(const FName SlotName, const UFortCampaignHeroLoadoutItem* Loadout) const {
    return NULL;
}

bool UFortHomebaseUIContext::GetUnlockedGadgets(TArray<UFortItem*>& UnlockedGadgets) const {
    return false;
}

FFortMultiSizeBrush UFortHomebaseUIContext::GetSquadIcon(const FName SquadId) const {
    return FFortMultiSizeBrush{};
}

UFortHero* UFortHomebaseUIContext::GetSlottedPrimaryHero() const {
    return NULL;
}

bool UFortHomebaseUIContext::GetShouldAutoSlotSurvivorSquads() const {
    return false;
}

TArray<UFortItem*> UFortHomebaseUIContext::GetItemsInSquad(const FName SquadId, bool bRemoveEmptySquadSlots) const {
    return TArray<UFortItem*>();
}

UFortItem* UFortHomebaseUIContext::GetItemInSquadSlot(FName SquadName, int32 SlotIndex) const {
    return NULL;
}

UFortCampaignHeroLoadoutItem* UFortHomebaseUIContext::GetCurrentlyViewedHeroLoadout() const {
    return NULL;
}

FName UFortHomebaseUIContext::GetCurrentlyFocusedHeroLoadoutSlotName() const {
    return NAME_None;
}

UFortCollectionBookData* UFortHomebaseUIContext::GetCollectionBookData() const {
    return NULL;
}

void UFortHomebaseUIContext::AutoSlotAllSurvivorSquads() {
}

UFortHomebaseUIContext::UFortHomebaseUIContext() {
}

