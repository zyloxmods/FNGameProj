#include "FortSignInWidget.h"

void UFortSignInWidget::UpdateSignInButton(const FText& Text) {
}

void UFortSignInWidget::StartSignIn() {
}

void UFortSignInWidget::HandleTextCommitted(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod) {
}

UFortSignInWidget::UFortSignInWidget() {
    this->NormalBorderStyle = NULL;
    this->HighlightBorderStyle = NULL;
    this->ForgotPasswordURL = TEXT("https://accounts.epicgames.com/account/oneTimePassword");
    this->Email = NULL;
    this->Password = NULL;
    this->EmailBorder = NULL;
    this->PasswordBorder = NULL;
    this->SignInButton = NULL;
    this->Button_ForgotPassword = NULL;
}

