#include "FortReplayBrowserRenameDialog.h"

void UFortReplayBrowserRenameDialog::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

void UFortReplayBrowserRenameDialog::HandleTextChanged(const FText& Text) {
}

UFortReplayBrowserRenameDialog::UFortReplayBrowserRenameDialog() {
    this->MaxReplayNameLength = 0;
    this->TextBox_Name = NULL;
    this->Button_Confirm = NULL;
    this->Button_Decline = NULL;
    this->Button_TapToClose = NULL;
}

