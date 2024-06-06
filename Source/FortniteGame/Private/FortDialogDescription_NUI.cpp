#include "FortDialogDescription_NUI.h"

FFortDialogDescription_NUI::FFortDialogDescription_NUI() {
    AdditionalContent = NULL;
    LeftAdditionalContent = NULL;
    DisplayTime = 1;
    Dismissable = false;
    Cancelable = false;
    bShouldWaitForLatentActionOnConfirmAction = false;
    NotificationHandler = NULL;
    ShowSound = NULL;
}

