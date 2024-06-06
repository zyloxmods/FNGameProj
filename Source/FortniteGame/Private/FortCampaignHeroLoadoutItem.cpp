#include "FortCampaignHeroLoadoutItem.h"

bool UFortCampaignHeroLoadoutItem::IsTeamPerkProgressive() const {
    return false;
}

bool UFortCampaignHeroLoadoutItem::IsTeamPerkActive() const {
    return false;
}

int32 UFortCampaignHeroLoadoutItem::GetTeamPerkMaxActivationLevel() const {
    return 0;
}

UFortTeamPerkItemDefinition* UFortCampaignHeroLoadoutItem::GetTeamPerkItemDefinition() const {
    return NULL;
}

int32 UFortCampaignHeroLoadoutItem::GetTeamPerkActivationLevelAndSatisfyingSlotIndices(TArray<int32>& OutSatisfyingSlotIndices) const {
    return 0;
}

int32 UFortCampaignHeroLoadoutItem::GetTeamPerkActivationLevel() const {
    return 0;
}

UFortTeamPerkItem* UFortCampaignHeroLoadoutItem::GetTeamPerk() const {
    return NULL;
}

void UFortCampaignHeroLoadoutItem::GetSupportHeroesAndSupportSlotIndices(TArray<UFortHero*>& OutHeroes, TArray<int32>& OutSupportSlotIndices) const {
}

void UFortCampaignHeroLoadoutItem::GetSupportHeroes(TArray<UFortHero*>& OutHeroes) const {
}

FName UFortCampaignHeroLoadoutItem::GetSlotNameByHero(const UFortHero* Hero) const {
    return NAME_None;
}

int32 UFortCampaignHeroLoadoutItem::GetLoadoutOrdinal() const {
    return 0;
}

void UFortCampaignHeroLoadoutItem::GetHeroesBySlotTag(const FGameplayTagQuery& TagQuery, TArray<UFortHero*>& OutHeroes) const {
}

void UFortCampaignHeroLoadoutItem::GetHeroes(TArray<UFortHero*>& OutHeroes) const {
}

UFortHero* UFortCampaignHeroLoadoutItem::GetHeroBySlotName(const FName SlotName) const {
    return NULL;
}

UFortGadgetItemDefinition* UFortCampaignHeroLoadoutItem::GetGadgetDefinitionBySlotIndex(const int32 SlotIndex) const {
    return NULL;
}

UFortHero* UFortCampaignHeroLoadoutItem::GetCommanderHero() const {
    return NULL;
}

UFortCampaignHeroLoadoutItem::UFortCampaignHeroLoadoutItem() {
    loadout_index = 0;
}

