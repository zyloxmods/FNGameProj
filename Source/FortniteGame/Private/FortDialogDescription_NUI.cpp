#include "FortDialogDescription_NUI.h"

FFortDialogDescription_NUI::FFortDialogDescription_NUI() {
    this->bMultipleConfirmButtons = false;
    this->AdditionalContent = NULL;
    this->LeftAdditionalContent = NULL;
    this->DisplayTime = 0.00f;
    this->Dismissable = false;
    this->Cancelable = false;
    this->bShouldWaitForLatentActionOnConfirmAction = false;
    this->NotificationHandler = NULL;
    this->ShowSound = NULL;
}

