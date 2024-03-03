#include "FortUINavigationManager.h"

bool UFortUINavigationManager::TryGetPendingNavigationOp(FFortUINavigationOperation& NavigationOp) {
    return false;
}

void UFortUINavigationManager::SetScrollWidget(UWidget* Widget) {
}

void UFortUINavigationManager::PushSquadManagementScreen(FName SquadId, int32 SquadSlotIndex) {
}

void UFortUINavigationManager::PushItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter, UFortItem* ItemToSelect, bool bShowAutoMulch) {
}

void UFortUINavigationManager::PushItemInspectionScreen(UFortItem* ItemToInspect, EFortItemInspectionMode Mode, UFortItemTileView* CycleTileView, bool bReadOnly, bool bAllowFavoriting, bool bIsTemporaryItem, bool bAllowRarityUpgrading) {
}

void UFortUINavigationManager::PushHeroLoadoutScreen(UFortCampaignHeroLoadoutItem* HeroLoadout) {
}

void UFortUINavigationManager::NavigateToSquadSlot(const FName SquadId, const int32 SquadSlotIndex) {
}

void UFortUINavigationManager::NavigateToQuestObjective(UFortQuestItem* QuestItem) {
}

void UFortUINavigationManager::NavigateToItemManagementScreen(EFortFrontendInventoryFilter Filter) {
}

void UFortUINavigationManager::NavigateToItem(UFortItem* Item) {
}

void UFortUINavigationManager::NavigateToFeature(EFortUIFeature Feature) {
}

void UFortUINavigationManager::NavigateToExpeditions() {
}

void UFortUINavigationManager::NavigateToCollectionBook() {
}

void UFortUINavigationManager::NavigateForGift(UFortGiftBoxItem* Item) {
}

bool UFortUINavigationManager::IsWidgetCentered(UWidget* Widget) const {
    return false;
}

bool UFortUINavigationManager::HasPendingNavigationOp(EFortUINavigationOp NavigationOp) {
    return false;
}

void UFortUINavigationManager::CompletePendingNavigationOp(EFortUINavigationOp NavigationOp) {
}

void UFortUINavigationManager::CenterWidget(UWidget* Widget) {
}

bool UFortUINavigationManager::CanNavigateToQuestObjective(UFortQuestItem* QuestItem) {
    return false;
}

bool UFortUINavigationManager::CanAccessSquadManagementScreen(FName SquadId, int32 SquadSlotIndex) {
    return false;
}

bool UFortUINavigationManager::CanAccessItemManagementScreen(EFortFrontendInventoryFilter ItemManagementFilter) {
    return false;
}

bool UFortUINavigationManager::CanAccessHeroLoadoutScreen(UFortCampaignHeroLoadoutItem* HeroLoadout) {
    return false;
}

bool UFortUINavigationManager::CanAccessCollectionBook() {
    return false;
}

bool UFortUINavigationManager::AttemptPlayQuest(UFortQuestItem* Quest) {
    return false;
}

bool UFortUINavigationManager::AttemptMatchmakeForQuest(UFortQuestItem* Quest, bool& OutContentNotDownloaded) {
    return false;
}

UFortUINavigationManager::UFortUINavigationManager() {
    this->HiddenCursorWidget = NULL;
    this->VirtualCursorWidget = NULL;
}

