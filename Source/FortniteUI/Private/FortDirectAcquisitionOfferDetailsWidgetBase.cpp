#include "FortDirectAcquisitionOfferDetailsWidgetBase.h"


bool UFortDirectAcquisitionOfferDetailsWidgetBase::ShouldHavePurchaseConfirmation() const {
    return false;
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::SetupOffer(UFortStoreFrontOfferInfo* InOfferData) {
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::SetShouldAllowItemViewModeAction(const bool Value) {
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::SetPagedItems(const TArray<UFortStoreFrontOfferInfo*>& InPagedItems) {
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::SetIsInItemViewMode(const bool Value) {
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::SendShopInteractionAnalytic(const FString& Interaction) const {
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::RefreshOfferInfo() {
}





void UFortDirectAcquisitionOfferDetailsWidgetBase::OnEnterViewModeActionCommitted(bool& PassThrough) {
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::HandleCurrentlyViewedAccountInfoChanged(FFortPublicAccountInfo NewInfo) {
}

UFortStoreFrontOfferInfo* UFortDirectAcquisitionOfferDetailsWidgetBase::GetOfferInfo() const {
    return NULL;
}

bool UFortDirectAcquisitionOfferDetailsWidgetBase::CanAutoEquip() {
    return false;
}

void UFortDirectAcquisitionOfferDetailsWidgetBase::AutoEquip() {
}

UFortDirectAcquisitionOfferDetailsWidgetBase::UFortDirectAcquisitionOfferDetailsWidgetBase() {
    this->IsInItemViewMode = false;
    this->ShouldAllowItemViewModeAction = true;
    this->OfferData = NULL;
    this->Picker_VariantSelector = NULL;
}

