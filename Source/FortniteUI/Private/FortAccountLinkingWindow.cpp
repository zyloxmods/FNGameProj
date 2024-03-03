#include "FortAccountLinkingWindow.h"

void UFortAccountLinkingWindow::HandleSkipSignUpClicked() {
}

void UFortAccountLinkingWindow::HandleSkipNoThanksClicked() {
}

void UFortAccountLinkingWindow::HandleSkipLoginClicked() {
}

void UFortAccountLinkingWindow::HandleSignupClicked() {
}

void UFortAccountLinkingWindow::HandleNoThanksClicked() {
}

void UFortAccountLinkingWindow::HandleLoginClicked() {
}

UFortAccountLinkingWindow::UFortAccountLinkingWindow() {
    this->Switcher_Main = NULL;
    this->HaveEpicAccountBlur = NULL;
    this->SkipSignInBlur = NULL;
    this->Switcher_NoThanks = NULL;
    this->Throbber_LoginDelay = NULL;
    this->Button_Signup = NULL;
    this->Button_Login = NULL;
    this->Button_NoThanks = NULL;
    this->Button_SkipSignInSignup = NULL;
    this->Button_SkipSignInLogin = NULL;
    this->Button_SkipSignInNoThanks = NULL;
}

