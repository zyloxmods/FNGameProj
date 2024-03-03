#include "FortRealMoneyOfferDetails.h"



void UFortRealMoneyOfferDetails::SetVBuckActionOnPurchaseButton() {
}

void UFortRealMoneyOfferDetails::SetPurchaseActionOnPurchaseButton() {
}

void UFortRealMoneyOfferDetails::SetCanPurchase(bool bInCanPurchase) {
}

void UFortRealMoneyOfferDetails::SendGift() {
}


void UFortRealMoneyOfferDetails::RequestMtxPurchase() {
}


bool UFortRealMoneyOfferDetails::IsGiftable() const {
    return false;
}

void UFortRealMoneyOfferDetails::HandleUndoAction(bool& bPassThrough) {
}

void UFortRealMoneyOfferDetails::HandleMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UFortRealMoneyOfferDetails::HandleItemPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId) {
}

void UFortRealMoneyOfferDetails::HandleBackAction(bool& bPassThrough) {
}

bool UFortRealMoneyOfferDetails::GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}

void UFortRealMoneyOfferDetails::DeclineMtxPurchase() {
}

void UFortRealMoneyOfferDetails::ClearActionOnPurchaseButton() {
}

UFortRealMoneyOfferDetails::UFortRealMoneyOfferDetails() {
    this->GiftingScreenClass = NULL;
    this->MFAModalClass = NULL;
    this->ItemInspectScreenClass = NULL;
    this->Button_Purchase = NULL;
    this->Button_SendGift = NULL;
    this->Button_Inspect = NULL;
    this->Button_MobileClose = NULL;
    this->Button_MTX = NULL;
    this->Container_SimpleMTXDisplay = NULL;
    this->Overlay_MobileCloseButton = NULL;
    this->ScrollBox_Details = NULL;
}

