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
    ActionEnvironment = EFortScriptedActionEnvironment::FrontEnd;
    ActionPriority = 0;
    bAllowOtherActionsWhenActive = false;
    bIsActive = false;
}

