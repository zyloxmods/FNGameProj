#include "AthenaItemShopScreen.h"

void UAthenaItemShopScreen::ResumeInput() {
}



void UAthenaItemShopScreen::HandleTabSelectionChanged(UCommonButton* TabButton, int32 TabIdx) {
}

void UAthenaItemShopScreen::HandleTabClicked(UCommonButton* TabButton, int32 TabIdx) {
}

void UAthenaItemShopScreen::HandlePurchaseOfferComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

void UAthenaItemShopScreen::HandlePrevCategoryAction(bool& bPassThrough) {
}

void UAthenaItemShopScreen::HandleOfferSeenInDetails(const FString& OfferId) {
}

void UAthenaItemShopScreen::HandleNextCategoryAction(bool& bPassThrough) {
}

void UAthenaItemShopScreen::HandleDonutSequenceStarted() {
}

void UAthenaItemShopScreen::HandleDonuteShopForceSetup() {
}

void UAthenaItemShopScreen::HandleCarouselOfferChanged(const FString& OfferId) {
}

void UAthenaItemShopScreen::HandleAffiliateAction(bool& bPassThrough) {
}


void UAthenaItemShopScreen::BPRequestFocusSelection() {
}


UAthenaItemShopScreen::UAthenaItemShopScreen() {
    this->bShowAvailableMTXBalance = false;
    this->ScrollPadding = 1;
    this->CurrentScrollOffset = 1;
    this->AffiliateModalClass = NULL;
    this->StoreSelectionPopupClass = NULL;
    this->AffiliateModal = NULL;
    this->StoreSelectionPopup = NULL;
    this->ScrollBox_Sections = NULL;
    this->HBox_Sections = NULL;
    this->Text_AffiliateName = NULL;
    this->InvalidationBox_ItemShop = NULL;
    this->EntryBox_SectionTabs = NULL;
    this->Container_AvailableAmount = NULL;
    this->TabButtonGroup = NULL;
    this->RichText_OfferMessage = NULL;
    this->bEnableOfferMessage = true;
}

