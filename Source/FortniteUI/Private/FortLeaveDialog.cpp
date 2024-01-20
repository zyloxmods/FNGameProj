#include "FortLeaveDialog.h"

void UFortLeaveDialog::SetupLeaveDialog(const FText& InTitle, const FText& InDescription, bool bInShowPartyOptions) {
}

void UFortLeaveDialog::CloseDialog() {
}

UFortLeaveDialog::UFortLeaveDialog() {
    this->VBox_PartyOptions = NULL;
    this->PartyRadioButtonGroup = NULL;
    this->Text_Title = NULL;
    this->Text_Description = NULL;
    this->Button_LeavePartyRadio = NULL;
    this->Button_StayWithPartyRadio = NULL;
    this->Button_Leave = NULL;
    this->Button_Cancel = NULL;
    this->Button_MobileClose = NULL;
}

