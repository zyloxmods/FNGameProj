#include "FortUIStateWidget_Login.h"



void UFortUIStateWidget_Login::SafePopFlowStackNoReturn() {
}

UWidget* UFortUIStateWidget_Login::SafePopFlowStack() {
    return NULL;
}

void UFortUIStateWidget_Login::PushWidgetOntoFlowStack(UWidget* Widget) {
}

void UFortUIStateWidget_Login::OnDisplayWebLogin(UWidget* WebWidget) {
}

void UFortUIStateWidget_Login::OnDisplayWebAccountCreation(UWidget* WebWidget) {
}


FText UFortUIStateWidget_Login::GetPlatformDisplayName() const {
    return FText::GetEmpty();
}

UFortUIStateWidget_Login::UFortUIStateWidget_Login() {
    this->StatusScreenClass = NULL;
    this->StatusScreenWidget = NULL;
    this->SplashScreenClass = NULL;
    this->SplashScreenWidget = NULL;
    this->HaveInviteClass = NULL;
    this->HaveInviteWidget = NULL;
    this->PlayedBeforeClass = NULL;
    this->PlayedBeforeWidget = NULL;
    this->CredentialSelectClass = NULL;
    this->CredentialSelectWidget = NULL;
    this->InviteRequestClass = NULL;
    this->InviteRequestWidget = NULL;
    this->SignInScreenClass = NULL;
    this->SignInScreenWidget = NULL;
    this->SignInConsoleClass = NULL;
    this->SignInConsoleWidget = NULL;
    this->RedirectToEpicClass = NULL;
    this->RedirectToEpicWidget = NULL;
    this->NewAccountWarningClass = NULL;
    this->NewAccountWarningWidget = NULL;
    this->LoginResultClass = NULL;
    this->LoginResultWIdget = NULL;
    this->AccountNotFoundClass = NULL;
    this->AccountNotFoundWidget = NULL;
    this->DisplayNameClass = NULL;
    this->DisplayNameWidget = NULL;
    this->MultiFactorAuthWidgetClass = NULL;
    this->MultiFactorAuthWidget = NULL;
    this->WebLoginWidgetClass = NULL;
    this->HealthWarningClass = NULL;
    this->HealthWarningWidget = NULL;
    this->EulaClass = NULL;
    this->EulaWidget = NULL;
    this->AccountLinkingWindowClass = NULL;
    this->AccountLinkingWidget = NULL;
    this->AccountPinLinkingWindowClass = NULL;
    this->AccountPinLinkingWidget = NULL;
    this->MOTDClass = NULL;
    this->MOTDWidget = NULL;
    this->LoginUnavailableClass = NULL;
    this->LoginFlowStack = NULL;
}

