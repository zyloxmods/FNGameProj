#include "FortRootViewportLayout.h"

void UFortRootViewportLayout::HandleControllerConnectionChanged(bool bConnected) {
}

UFortRootViewportLayout::UFortRootViewportLayout() {
    this->CurrentStateWidget = NULL;
    this->NotificationManager = NULL;
    this->CurrentLegacyStateWidget = NULL;
    this->LetoLayoutBorderClass = NULL;
    this->WidgetQueue_ModalContent = NULL;
    this->ConfirmationWindow_ConfirmationWidget = NULL;
    this->ErrorWindow_Errors = NULL;
    this->ProgressModal_ControllerDisconnected = NULL;
    this->RestartModal = NULL;
    this->ToastDisplayArea_ToastHandler = NULL;
}

