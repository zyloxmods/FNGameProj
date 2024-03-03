#include "FortToastDisplayArea.h"

void UFortToastDisplayArea::TestBasicToast(EFortNotificationType InNotificationType, FText InTitle, FText InDescription) {
}

void UFortToastDisplayArea::RegisterToastHandler() {
}

void UFortToastDisplayArea::HandleToastFinished() {
}

void UFortToastDisplayArea::HandleNewToastAvailable() {
}

UFortToastDisplayArea::UFortToastDisplayArea() {
    this->ToastQueue = NULL;
    this->CurrentToast = NULL;
    this->ToastWidget_New = NULL;
    this->PowerToastWidget = NULL;
    this->ToastWidget_MinorError = NULL;
    this->VoiceChannelChangePopup = NULL;
    this->SubscribeToastWidget = NULL;
    this->ToastWidgetDonut = NULL;
}

