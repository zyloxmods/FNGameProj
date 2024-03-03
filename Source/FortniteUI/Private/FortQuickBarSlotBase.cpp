#include "FortQuickBarSlotBase.h"

void UFortQuickBarSlotBase::UpdateKeyBindingVisibility() {
}

void UFortQuickBarSlotBase::UpdateKeyBindingText() {
}

void UFortQuickBarSlotBase::UpdateItemCardsVisibility() {
}

void UFortQuickBarSlotBase::SetTopComboSwitcherVisibility(ESlateVisibility InVisibility) {
}


void UFortQuickBarSlotBase::SetQuickbarTypeRuntime(EFortQuickBars NewQuickBarType, bool bRefresh) {
}

void UFortQuickBarSlotBase::SetQuickbarIndexRuntime(int32 Index, bool bRefresh) {
}


void UFortQuickBarSlotBase::SetBottomComboSwitcherVisibility(ESlateVisibility InVisibility) {
}

void UFortQuickBarSlotBase::Resize(EFortItemCardSize CardSize) {
}

void UFortQuickBarSlotBase::RefreshItemIfSlotChanged(EFortQuickBars InQuickBar, const TArray<int32>& InSlot) {
}

void UFortQuickBarSlotBase::RefreshItem() {
}

void UFortQuickBarSlotBase::RefreshInventoryCapacity() {
}


void UFortQuickBarSlotBase::OnMinigameStarted() {
}

void UFortQuickBarSlotBase::OnMinigameEnded() {
}



FVector2D UFortQuickBarSlotBase::GetSlotSizeForItem(const UFortItem* InItem) const {
    return FVector2D{};
}

FName UFortQuickBarSlotBase::GetKeyBindingActionKeyboard() {
    return NAME_None;
}

FName UFortQuickBarSlotBase::GetKeyBindingActionGamepad() {
    return NAME_None;
}

FName UFortQuickBarSlotBase::GetKeyBindingAction() {
    return NAME_None;
}

UFortQuickBarSlotBase::UFortQuickBarSlotBase() {
    this->SwitcherTopComboSwitcher = NULL;
    this->SwitcherBottomComboSwitcher = NULL;
    this->KeybindTop = NULL;
    this->KeybindBottom = NULL;
    this->KeybindBottomCombo1 = NULL;
    this->KeybindBottomCombo2 = NULL;
    this->KeybindTopComboArrow1 = NULL;
    this->KeybindTopComboArrow2 = NULL;
    this->KeybindBottomComboArrow1 = NULL;
    this->KeybindBottomComboArrow2 = NULL;
    this->BottomHoldText = NULL;
    this->TopLeftArrowImage = NULL;
    this->TopLeftArrowImage2 = NULL;
    this->TopRightArrowImage = NULL;
    this->TopRightArrowImage2 = NULL;
    this->BottomLeftArrowImage = NULL;
    this->BottomLeftArrowImage2 = NULL;
    this->BottomRightArrowImage = NULL;
    this->BottomRightArrowImage2 = NULL;
    this->EmptyImage = NULL;
    this->ItemCardMaximized = NULL;
    this->ItemCardMinimized = NULL;
    this->QuickbarSlotCooldown = NULL;
    this->SlotInteraction = NULL;
    this->NativeCell = NULL;
    this->SlotIndex = 0;
    this->QuickBarType = EFortQuickBars::Primary;
    this->bShowBottomArrows = false;
    this->bShowTopArrows = false;
    this->bHideKeybindsWhenAbilityUnavailable = false;
    this->bShouldCollapseItemWidgetBorder = false;
    this->DoNotPlaySelectionAnimation = false;
    this->bIsAthenaQuickBar = false;
    this->bKeybindsHidden = false;
    this->ItemCardSize = EFortItemCardSize::XXS;
    this->Item = NULL;
    this->InputData = NULL;
    this->bCheckVisibilityBasedOffInventoryCapacity = false;
    this->bDragAndDropEnabled = true;
    this->bUseSlotSizeBySlotUsage = true;
    this->SlotSizeBySlotUsage.AddDefaulted(5);
}

