#include "FortPurchaseHistoryScreen.h"









void UFortPurchaseHistoryScreen::HandleTabButtonClicked(EPurchaseReturnStep ClickedStep) {
}

void UFortPurchaseHistoryScreen::HandlePreviousStepAction(bool& bPassThrough) {
}

EPurchaseReturnStep UFortPurchaseHistoryScreen::GetCurrentStep() const {
    return EPurchaseReturnStep::ItemSelection;
}

void UFortPurchaseHistoryScreen::ConsumeComplete() {
}

UFortPurchaseHistoryScreen::UFortPurchaseHistoryScreen() {
    this->RefundConfirmationClass = NULL;
    this->RefundConfirmationWidget = NULL;
    this->TabButtonGroup = NULL;
    this->bRefundConfirmationProcessing = false;
    this->ListView_Purchases = NULL;
    this->ListView_Reasons = NULL;
    this->Text_Desc = NULL;
    this->Text_RefundCount = NULL;
    this->Button_RequestRefund = NULL;
    this->RichText_WarningMsg = NULL;
    this->Text_RefundValue = NULL;
    this->Text_RefundReason = NULL;
    this->ScrollBox_ItemsToReturn = NULL;
}

