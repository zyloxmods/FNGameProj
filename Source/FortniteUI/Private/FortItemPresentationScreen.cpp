#include "FortItemPresentationScreen.h"

void UFortItemPresentationScreen::SetGiftBoxItem(UFortGiftBoxItem* GiftBoxItem) {
}













void UFortItemPresentationScreen::HandleHoldToClose(bool& bPassThrough) {
}

void UFortItemPresentationScreen::HandleExitBattlePassPurchaseFlow() {
}

void UFortItemPresentationScreen::HandleBack() {
}

void UFortItemPresentationScreen::FinishSwitchingToPaidItems() {
}

void UFortItemPresentationScreen::EnableUserControlOnPaidItems() {
}

void UFortItemPresentationScreen::ClearItemPreview() {
}

UFortItemPresentationScreen::UFortItemPresentationScreen() {
    this->ItemCardClass = NULL;
    this->CurrentItemSelected = NULL;
    this->EntryBoxButtonGroup = NULL;
    this->MaxItemsInView = 0;
    this->HotItemDisplayTime = 1;
    this->bShowingBattlePassItems = false;
    this->Button_Equip = NULL;
    this->Button_Next = NULL;
    this->Text_ItemsCollected = NULL;
    this->ItemInfoPresentationWidget = NULL;
    this->ItemHeaderWidget = NULL;
    this->BattlePassTracker = NULL;
    this->Text_UnownedBaseItemMessage = NULL;
    this->Image_Lock = NULL;
    this->DynamicEntryBox_Items = NULL;
    this->ListView_Items = NULL;
    this->ListView_PaidItems = NULL;
    this->Border_InputBlocker = NULL;
    this->Button_LeftScrollArrow = NULL;
    this->Button_RightScrollArrow = NULL;
    this->Banner_TokenDescription = NULL;
}

