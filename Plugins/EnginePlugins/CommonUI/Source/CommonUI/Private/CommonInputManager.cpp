#include "CommonInputManager.h"

void UCommonInputManager::SuspendStartingOperationProcessing() {
}

bool UCommonInputManager::StopListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent) {
    return false;
}

bool UCommonInputManager::StartListeningForExistingHeldAction(const FDataTableRowHandle& InputActionDataRow, const FCommonActionCompleteSingle& CompleteEvent, const FCommonActionProgressSingle& ProgressEvent) {
    return false;
}

void UCommonInputManager::SetGlobalInputHandlerPriorityFilter(int32 InFilterPriority) {
}

void UCommonInputManager::ResumeStartingOperationProcessing() {
}

void UCommonInputManager::PushActivatablePanel(UCommonActivatablePanel* ActivatablePanel, bool bIntroPanel, bool bOutroPanelBelow) {
}

void UCommonInputManager::PopActivatablePanel(UCommonActivatablePanel* ActivatablePanel) {
}

bool UCommonInputManager::IsPanelOnStack(const UCommonActivatablePanel* InPanel) const {
    return false;
}

bool UCommonInputManager::IsInputSuspended() const {
    return false;
}

UCommonActivatablePanel* UCommonInputManager::GetTopPanel() const {
    return NULL;
}

int32 UCommonInputManager::GetGlobalInputHandlerPriorityFilter() const {
    return 0;
}

bool UCommonInputManager::GetAvailableInputActions(TArray<FCommonInputActionHandlerData>& AvailableInputActions) {
    return false;
}

UCommonInputManager::UCommonInputManager() {
}

