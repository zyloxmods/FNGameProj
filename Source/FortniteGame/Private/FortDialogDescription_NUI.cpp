#include "FortDialogDescription_NUI.h"

FFortDialogDescription_NUI::FFortDialogDescription_NUI() {
    this->AdditionalContent = NULL;
    this->LeftAdditionalContent = NULL;
    this->DisplayTime = 1;
    this->Dismissable = false;
    this->Cancelable = false;
    this->bShouldWaitForLatentActionOnConfirmAction = false;
    this->NotificationHandler = NULL;
    this->ShowSound = NULL;
}

