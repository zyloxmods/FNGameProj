#include "FortItemCraftingOptionsActivatablePanel.h"

void UFortItemCraftingOptionsActivatablePanel::UpdateTierImages() {
}

void UFortItemCraftingOptionsActivatablePanel::SetTargetCraftingTierIndex(int32 NewTierIndex) {
}

void UFortItemCraftingOptionsActivatablePanel::SetSelectedQuantity_BP(int32 NewQuantity) {
}

void UFortItemCraftingOptionsActivatablePanel::SetItemManagementScreen(UFortItemManagementScreen* InItemManagementScreen) {
}

void UFortItemCraftingOptionsActivatablePanel::SetBaseSchematicItem(UFortSchematicItem* InBaseItem) {
}

void UFortItemCraftingOptionsActivatablePanel::SelectPreviousTier() {
}

void UFortItemCraftingOptionsActivatablePanel::SelectNextTier() {
}





void UFortItemCraftingOptionsActivatablePanel::IncreaseSelectedQuantity() {
}

void UFortItemCraftingOptionsActivatablePanel::DecreaseSelectedQuantity() {
}

void UFortItemCraftingOptionsActivatablePanel::CraftTargetItem() {
}

void UFortItemCraftingOptionsActivatablePanel::CraftAndSlotTargetItem() {
}

UFortItemCraftingOptionsActivatablePanel::UFortItemCraftingOptionsActivatablePanel() {
    this->BaseItem = NULL;
    this->TargetItem = NULL;
    this->MaxCraftingTierIndex = 0;
    this->TargetCraftingTierIndex = 0;
    this->TargetPromotionTierIndex = 0;
    this->MaxQuantity = 0;
    this->SelectedQuantity = 0;
    this->CanCraftTargetItem = false;
    this->TierImageParent_1 = NULL;
    this->TierImageParent_2 = NULL;
    this->TierImageParent_3 = NULL;
    this->TierImageParent_4 = NULL;
    this->TierImageParent_5 = NULL;
    this->TierImage_1 = NULL;
    this->TierImage_2 = NULL;
    this->TierImage_3 = NULL;
    this->TierImage_4 = NULL;
    this->TierImage_5 = NULL;
}

