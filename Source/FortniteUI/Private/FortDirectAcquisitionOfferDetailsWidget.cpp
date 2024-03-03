#include "FortDirectAcquisitionOfferDetailsWidget.h"

void UFortDirectAcquisitionOfferDetailsWidget::UpdateVoteCounter() {
}

void UFortDirectAcquisitionOfferDetailsWidget::UpdateSwipeButtonsVisibility() {
}

void UFortDirectAcquisitionOfferDetailsWidget::TriggerPurchaseChoiceRequest() {
}

bool UFortDirectAcquisitionOfferDetailsWidget::IsMultiplePriceRealMoneyOffer() const {
    return false;
}

void UFortDirectAcquisitionOfferDetailsWidget::HandleGetVBucksClicked() {
}

bool UFortDirectAcquisitionOfferDetailsWidget::GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const {
    return false;
}

void UFortDirectAcquisitionOfferDetailsWidget::FocusOnWidget(UWidget* WidgetToFocus) {
}

void UFortDirectAcquisitionOfferDetailsWidget::Dismiss() {
}

UFortDirectAcquisitionOfferDetailsWidget::UFortDirectAcquisitionOfferDetailsWidget() {
    this->VoteFeedbackClass = NULL;
    this->Item_InfoHeader = NULL;
    this->Button_CastVote = NULL;
    this->FlameCounter = NULL;
    this->AvailableSparksWidget = NULL;
    this->ComVoteFeedbackContainer = NULL;
    this->Switcher_MtxAndVote = NULL;
    this->Com_ThanksForVotingMessage = NULL;
    this->OfferNavigator_ArrowNavigation = NULL;
    this->StorePopup_Details = NULL;
}

