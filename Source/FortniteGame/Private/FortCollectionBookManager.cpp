#include "FortCollectionBookManager.h"

bool UFortCollectionBookManager::UnSlotItem(const UFortAccountItem* Item) {
    return false;
}

bool UFortCollectionBookManager::SlotItem(const UFortAccountItem* Item, FName SlotId) {
    return false;
}

bool UFortCollectionBookManager::PurchaseItem(const UFortAccountItem* Item) {
    return false;
}

void UFortCollectionBookManager::PopulateCollectionBookRewards(TArray<FFortCollectionBookRewards>& OutAvailableRewards) {
}

bool UFortCollectionBookManager::IsItemMissingFromCollectionBook(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

UFortItem* UFortCollectionBookManager::GetItemInSlot(FName SlotId) const {
    return NULL;
}

float UFortCollectionBookManager::GetBookXPPercentToNextLevel(int32 CurrentLevel, int32 NewXP) const {
    return 0.0f;
}

int32 UFortCollectionBookManager::GetBookTotalXPToNextLevel(int32 CurrentLevel) const {
    return 0;
}

bool UFortCollectionBookManager::DoesItemSlotExistInCollectionBook(const UFortItemDefinition* ItemDefinition) const {
    return false;
}

void UFortCollectionBookManager::ClaimReward(const FFortCollectionBookRewards& RewardToClaim, int32 RewardIndex) {
}

bool UFortCollectionBookManager::CanSlotItem(const UFortAccountItem* AccountItem, bool bOnlyAllowIfSlotEmpty, FName OutSlotId) const {
    return false;
}

int32 UFortCollectionBookManager::CalculatePageXp(FName PageId) const {
    return 0;
}

int32 UFortCollectionBookManager::CalculateBookXp() const {
    return 0;
}

UFortCollectionBookManager::UFortCollectionBookManager() {
}

