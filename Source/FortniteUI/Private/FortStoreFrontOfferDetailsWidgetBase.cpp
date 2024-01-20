#include "FortStoreFrontOfferDetailsWidgetBase.h"


bool UFortStoreFrontOfferDetailsWidgetBase::ShouldHavePurchaseConfirmation() const {
    return false;
}

void UFortStoreFrontOfferDetailsWidgetBase::SetupOffer(UFortStoreFrontOfferInfo* InOfferData) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetShouldAllowItemViewModeAction(const bool Value) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetPagedItems(const TArray<UFortStoreFrontOfferInfo*>& InPagedItems) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SetIsInItemViewMode(const bool Value) {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendUndoMtxReturnedAnalytic(const FString& Interaction, const int32 MtxReturned) const {
}

void UFortStoreFrontOfferDetailsWidgetBase::SendShopInteractionAnalytic(const FString& Interaction) const {
}

void UFortStoreFrontOfferDetailsWidgetBase::RequestExternalPurchase(int32 Quantity) {
}

void UFortStoreFrontOfferDetailsWidgetBase::RefreshUndoState() {
}

void UFortStoreFrontOfferDetailsWidgetBase::RefreshOfferInfo() {
}

void UFortStoreFrontOfferDetailsWidgetBase::PurchaseOffer(const FOnPurchaseOfferComplete& Callback, int32 Quantity) {
}





void UFortStoreFrontOfferDetailsWidgetBase::OnEnterViewModeActionCommitted(bool& PassThrough) {
}

void UFortStoreFrontOfferDetailsWidgetBase::HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo) {
}

UFortStoreFrontOfferInfo* UFortStoreFrontOfferDetailsWidgetBase::GetOfferInfo() const {
    return NULL;
}

void UFortStoreFrontOfferDetailsWidgetBase::ConfirmUndo() {
}

bool UFortStoreFrontOfferDetailsWidgetBase::CanAutoEquip() {
    return false;
}

void UFortStoreFrontOfferDetailsWidgetBase::AutoEquip() {
}

UFortStoreFrontOfferDetailsWidgetBase::UFortStoreFrontOfferDetailsWidgetBase() {
    this->IsInItemViewMode = false;
    this->ShouldAllowItemViewModeAction = true;
    this->bImmediatelyPurchased = false;
    this->OfferData = NULL;
    this->Picker_VariantSelector = NULL;
    this->TextUndoAvailability = NULL;
    this->UndoButton = NULL;
    this->UndoCompletionWidgetClass = NULL;
    this->UndoCompletionWidget = NULL;
}

