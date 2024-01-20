#include "EnableMultiFactorModal.h"

bool UEnableMultiFactorModal::QueueModal(bool bAllowPermanentOptOut, bool bTournamentQueue) {
    return false;
}




void UEnableMultiFactorModal::AnimationsComplete() {
}

UEnableMultiFactorModal::UEnableMultiFactorModal() {
    this->bHasEnableMFABeenClicked = false;
    this->bShouldShowConsoleVersion = false;
    this->Button_EnableMFA = NULL;
    this->Button_RemindLater = NULL;
    this->Button_OptOut = NULL;
    this->Button_ConsoleMFAEnabled = NULL;
    this->CT_MFA_Description = NULL;
}

