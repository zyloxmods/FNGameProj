#include "FortScriptedAction.h"

void AFortScriptedAction::GetParams(FFortScriptedActionParams& Params) {
}

void AFortScriptedAction::Execute_Implementation(const FFortScriptedActionParams& Params) {
}

void AFortScriptedAction::CompleteAction(bool bRegisterActionAgain) {
}

bool AFortScriptedAction::CanExecute_Implementation(const FFortScriptedActionParams& Params) const {
    return false;
}

void AFortScriptedAction::CancelAction(bool bRegisterActionAgain) {
}

AFortScriptedAction::AFortScriptedAction() {
    this->ActionEnvironment = EFortScriptedActionEnvironment::Max_None;
    this->ActionPriority = 10;
    this->bAllowOtherActionsWhenActive = false;
    this->bIsActive = false;
}

