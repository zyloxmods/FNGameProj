#include "FortCraftingBarWidget.h"

void UFortCraftingBarWidget::SetHideCraftingBar(bool bInHideCraftBar) {
}

void UFortCraftingBarWidget::OnCompletedSetHidden() {
}

void UFortCraftingBarWidget::HandlePlayerStoppedCrafting(bool bSuccess, EFortCraftFailCause CraftFailureCause) {
}

void UFortCraftingBarWidget::HandlePlayerStartedCrafting() {
}

UFortCraftingBarWidget::UFortCraftingBarWidget() {
    this->CraftingText = NULL;
    this->CraftingProgressBar = NULL;
    this->CompletedRemainVisibleTime = 1;
}

