#include "FortLoginInteractions.h"

void UFortLoginInteractions::HandleDisplayWebLogin(UWidget* WebWidget) {
}

void UFortLoginInteractions::HandleDisplayWebAccountCreation(UWidget* WebWidget) {
}

void UFortLoginInteractions::HandleDismissWebLogin() {
}

void UFortLoginInteractions::HandleDismissWebAccountCreation() {
}

UFortLoginInteractions::UFortLoginInteractions() {
    this->Button_Back = NULL;
    this->Switcher_Input = NULL;
    this->PlayedBefore_Select = NULL;
    this->Credential_Select = NULL;
    this->SignIn_Credentials = NULL;
    this->Redirect_EpicAccount = NULL;
    this->Account_NotFound = NULL;
    this->DisplayName_Create = NULL;
    this->MFA_Auth = NULL;
    this->EULA_Accept = NULL;
    this->Account_Link = NULL;
    this->Account_PinLink = NULL;
    this->Web_Login = NULL;
    this->AgeGateFlow = NULL;
}

