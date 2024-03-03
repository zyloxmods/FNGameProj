#include "FortAccountPinLinkingWindow.h"

void UFortAccountPinLinkingWindow::UpdateExpiringTime(int32 RemainingTime) {
}

void UFortAccountPinLinkingWindow::ShowCurrentPinInfo() {
}

void UFortAccountPinLinkingWindow::SetPinGrantInfo(const FString& PinCode, const FString& ActivationURL, const FText& InfoText) {
}

void UFortAccountPinLinkingWindow::SetInitialSection() {
}

void UFortAccountPinLinkingWindow::PinCodeIssue(const FText& ErrorMessage, const FText& InfoText) {
}

void UFortAccountPinLinkingWindow::HandleSkipNoThanksClicked() {
}

void UFortAccountPinLinkingWindow::HandleSkipLinkingClicked() {
}

void UFortAccountPinLinkingWindow::HandleLinkAccountClicked() {
}

void UFortAccountPinLinkingWindow::HandleGoBackToInitialRequest() {
}

void UFortAccountPinLinkingWindow::HandleGenerateCodeClicked() {
}

void UFortAccountPinLinkingWindow::HandleCreateAccountClicked() {
}

void UFortAccountPinLinkingWindow::HandleCancelPinRequestClicked() {
}

void UFortAccountPinLinkingWindow::CreateHeadlessAccount() {
}

UFortAccountPinLinkingWindow::UFortAccountPinLinkingWindow() {
    this->Switcher_Main = NULL;
    this->Blur_PinGrantCodeInfo = NULL;
    this->Blur_InitialRequest = NULL;
    this->Blur_SkipSignIn = NULL;
    this->Switcher_NoThanks = NULL;
    this->Throbber_LoginDelay = NULL;
    this->Throbber_GettingPinCode = NULL;
    this->Button_CreateEpicAccount = NULL;
    this->Button_GoLinking = NULL;
    this->Button_SkipLinking = NULL;
    this->Button_GenerateCode = NULL;
    this->Button_CancelPinRequest = NULL;
    this->Button_SkipGoBackLinking = NULL;
    this->Button_SkipSignInNoThanks = NULL;
    this->Text_PinCode = NULL;
    this->Text_ErrorMsg = NULL;
    this->Text_ActivationURL = NULL;
    this->Text_CodeExpiringTime = NULL;
    this->Text_Info = NULL;
    this->Text_PinPromptTypeTitle = NULL;
    this->Container_ActivationURL = NULL;
    this->Container_CreateEpicAccount = NULL;
}

