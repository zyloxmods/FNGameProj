#include "FortUIManagerWidget_NUI.h"
#include "Templates/SubclassOf.h"


void UFortUIManagerWidget_NUI::UnregisterStateTrigger(UFortUIStateTrigger* TriggerToRemove) {
}

void UFortUIManagerWidget_NUI::ShowErrorDialog(UObject* WorldContextObject, FText OperationDesc, FText DisplayMessage, const FString& ErrorNote, EFortErrorSeverity ErrorSeverity) {
}

bool UFortUIManagerWidget_NUI::ShouldBlockSubtitlePortrait() const {
    return false;
}

void UFortUIManagerWidget_NUI::SetStateContentDisplayed(bool bDisplay) {
}

void UFortUIManagerWidget_NUI::SetFrontEndVisibility(bool bHideHeader, bool bHideFooter, bool bHideChatWidget) const {
}

void UFortUIManagerWidget_NUI::RemoveModalPanel(UCommonActivatablePanel* ModalPanel) {
}

void UFortUIManagerWidget_NUI::ReleaseNotification(UFortUINotification* Notification) {
}

void UFortUIManagerWidget_NUI::RegisterStateTrigger(UFortUIStateTrigger* StateTrigger) {
}

void UFortUIManagerWidget_NUI::QueueNotification(EFortNotificationQueueType QueueType, UFortUINotification* Notification) {
}

void UFortUIManagerWidget_NUI::QueueActivatablePanelIntoModalLayer(UCommonActivatablePanel* Panel) {
}

void UFortUIManagerWidget_NUI::PushContentWidgetAdvanced(UWidget* Widget, bool bHideHeader, bool bHideFooter, bool bHideChatWidget) const {
}

void UFortUIManagerWidget_NUI::PushContentWidget(UWidget* Widget) const {
}

void UFortUIManagerWidget_NUI::PopCurrentModal() {
}

void UFortUIManagerWidget_NUI::PopContentWidget() const {
}

void UFortUIManagerWidget_NUI::PopAllContentWidgets() {
}

void UFortUIManagerWidget_NUI::PopActivatablePanelInModalLayer(UCommonActivatablePanel* Panel) {
}







void UFortUIManagerWidget_NUI::NotifyPreShowConfirmation_NUI(const FFortDialogDescription_NUI& DialogDescription) {
}

void UFortUIManagerWidget_NUI::NativeClearLayers() {
}

void UFortUIManagerWidget_NUI::KillConfirmationDialog(UObject* WorldContextObject) {
}

bool UFortUIManagerWidget_NUI::IsStateContentDisplayed() const {
    return false;
}



void UFortUIManagerWidget_NUI::IncrementShouldBlockSubtitlePortrait() {
}

bool UFortUIManagerWidget_NUI::HasActiveModalWidget() const {
    return false;
}

void UFortUIManagerWidget_NUI::HandleDeactivatedModal(UCommonActivatablePanel* DeactivatedPanel) {
}

UFortUINotificationQueue* UFortUIManagerWidget_NUI::GetUINotificationQueue(UObject* WorldContextObject, EFortNotificationQueueType QueueType) {
    return NULL;
}

UFortUINavigationManager* UFortUIManagerWidget_NUI::GetUINavigationManager(UObject* WorldContextObject) {
    return NULL;
}

UFortUIManagerWidget_NUI* UFortUIManagerWidget_NUI::GetUIManagerWidget(UObject* WorldContextObject) {
    return NULL;
}

UFortUINavigationManager* UFortUIManagerWidget_NUI::GetNavigationManager() const {
    return NULL;
}

UFortUIStateWidget_NUI* UFortUIManagerWidget_NUI::GetCurrentUIStateWidget() const {
    return NULL;
}

UCommonActivatablePanel* UFortUIManagerWidget_NUI::GetCurrentModal() const {
    return NULL;
}

UUserWidget* UFortUIManagerWidget_NUI::GetCachedWidget(UClass* InClass) {
    return NULL;
}



void UFortUIManagerWidget_NUI::DecrementShouldBlockSubtitlePortrait() {
}

UFortUIStateTrigger* UFortUIManagerWidget_NUI::CreateUIStateTrigger(TSubclassOf<UFortUIStateTrigger> Class, UObject* WorldContextObject) {
    return NULL;
}

UFortUINotification* UFortUIManagerWidget_NUI::CreateNotification(TSubclassOf<UFortUINotification> UINotificationClass) {
    return NULL;
}



bool UFortUIManagerWidget_NUI::CanNotificationBeQueued(EFortNotificationQueueType QueueType, EFortNotificationPriority NotificationPriority) const {
    return false;
}

EFortUIState UFortUIManagerWidget_NUI::_BPGetCurrentUIState() const {
    return EFortUIState::Invalid;
}

UFortUIManagerWidget_NUI::UFortUIManagerWidget_NUI() {
    this->CurrentModalWidget = NULL;
    this->CurrentState = EFortUIState::Invalid;
    this->PendingState = EFortUIState::Invalid;
    this->CurrentStateWidget = NULL;
    this->bIsStateContentDisplayed = true;
    this->NavigationManager = NULL;
    this->NotificationManager = NULL;
    this->bSupressErrors = false;
    this->PlayerBannedScreen = NULL;
    this->BlockSubtitlePortraitRefcount = 0;
    this->ModalLayer = NULL;
}

