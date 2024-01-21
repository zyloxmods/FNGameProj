#include "FortSignInConsole.h"

void UFortSignInConsole::UpdatePasscodeStatus(const FText& Text) {
}

void UFortSignInConsole::UpdateEmailStatus(const FText& Text) {
}

void UFortSignInConsole::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

UFortSignInConsole::UFortSignInConsole() {
    this->Email = NULL;
    this->Button_SendCode = NULL;
    this->Passcode = NULL;
    this->Text_Error = NULL;
    this->Button_SubmitCode = NULL;
    this->Switcher_Main = NULL;
}

