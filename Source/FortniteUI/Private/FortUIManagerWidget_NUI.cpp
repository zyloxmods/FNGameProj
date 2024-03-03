#include "FortUIManagerWidget_NUI.h"
#include "Templates/SubclassOf.h"


void UFortUIManagerWidget_NUI::RequestClearConfirmationLayer() {
}




void UFortUIManagerWidget_NUI::NativeClearLayers() {
}

void UFortUIManagerWidget_NUI::KillConfirmationDialog(UObject* WorldContextObject) {
}

bool UFortUIManagerWidget_NUI::IsStateContentChildShowing() const {
    return false;
}


void UFortUIManagerWidget_NUI::HandleErrorWindowDeactivated(UCommonActivatablePanel* RemovedPanel) {
}

void UFortUIManagerWidget_NUI::HandleDeactivatedModal(UCommonActivatablePanel* DeactivatedPanel) {
}

void UFortUIManagerWidget_NUI::HandleConfirmationWindowDeactivated(UCommonActivatablePanel* DeactivatedPanel) {
}

UFortUINotificationQueue* UFortUIManagerWidget_NUI::GetUINotificationQueue(UObject* WorldContextObject, EFortNotificationQueueType QueueType) {
    return NULL;
}

UFortUIManagerWidget_NUI* UFortUIManagerWidget_NUI::GetUIManagerWidget(const UObject* WorldContextObject) {
    return NULL;
}

UFortUINotification* UFortUIManagerWidget_NUI::CreateNotification(TSubclassOf<UFortUINotification> UINotificationClass) {
    return NULL;
}

EFortUIState UFortUIManagerWidget_NUI::_BPGetCurrentUIState() const {
    return EFortUIState::Invalid;
}

UFortUIManagerWidget_NUI::UFortUIManagerWidget_NUI() {
    this->CurrentModalWidget = NULL;
    this->PlayerBannedScreen = NULL;
    this->CurrentStateWidget = NULL;
    this->NotificationManager = NULL;
    this->StateContentLayer = NULL;
    this->ModalLayer = NULL;
    this->ErrorWindow_Errors = NULL;
    this->RestartModal = NULL;
    this->ConfirmationWindow_ConfirmationWidget = NULL;
}

