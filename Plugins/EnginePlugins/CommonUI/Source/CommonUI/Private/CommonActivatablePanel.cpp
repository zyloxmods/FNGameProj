#include "CommonActivatablePanel.h"

void UCommonActivatablePanel::SetInputActionHandlerWithProgressPopupMenu(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent, UCommonPopupMenu* PopupMenu) {
}

void UCommonActivatablePanel::SetInputActionHandlerWithProgress(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent) {
}

void UCommonActivatablePanel::SetInputActionHandlerWithPopupMenu(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent, UCommonPopupMenu* PopupMenu) {
}

void UCommonActivatablePanel::SetInputActionHandler(FDataTableRowHandle InputActionRow, FCommonActionCommited CommitedEvent) {
}

void UCommonActivatablePanel::SetActionHandlerStateWithDisabledCommitEvent(UDataTable* DataTable, FName RowName, EInputActionState State, FCommonActionCommited DisabledCommitEvent) {
}

void UCommonActivatablePanel::SetActionHandlerStateFromHandleWithDisabledCommitEvent(FDataTableRowHandle InputActionRow, EInputActionState State, FCommonActionCommited DisabledCommitEvent) {
}

void UCommonActivatablePanel::SetActionHandlerStateFromHandle(FDataTableRowHandle InputActionRow, EInputActionState State) {
}

void UCommonActivatablePanel::SetActionHandlerState(const UDataTable* DataTable, FName RowName, EInputActionState State) {
}

void UCommonActivatablePanel::RemoveInputActionHandler(FDataTableRowHandle InputActionRow) {
}

void UCommonActivatablePanel::RemoveAllInputActionHandlers() {
}

void UCommonActivatablePanel::PopPanel() {
}




void UCommonActivatablePanel::OnBeginOutro_Implementation() {
}

void UCommonActivatablePanel::OnBeginIntro_Implementation() {
}


bool UCommonActivatablePanel::IsIntroed() const {
    return false;
}

bool UCommonActivatablePanel::IsInActivationStack() const {
    return false;
}

bool UCommonActivatablePanel::HasInputActionHandler(FDataTableRowHandle InputActionRow) const {
    return false;
}

bool UCommonActivatablePanel::GetInputActions(TArray<FCommonInputActionHandlerData>& InputActionDataRows) const {
    return false;
}

void UCommonActivatablePanel::EndOutro() {
}

void UCommonActivatablePanel::EndIntro() {
}

void UCommonActivatablePanel::BeginOutro() {
}

void UCommonActivatablePanel::BeginIntro() {
}

void UCommonActivatablePanel::AddInputActionNoHandler(UDataTable* DataTable, FName RowName) {
}

void UCommonActivatablePanel::AddInputActionHandlerWithProgressPopup(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent, UCommonPopupMenu* PopupMenu) {
}

void UCommonActivatablePanel::AddInputActionHandlerWithProgress(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, FCommonActionProgressSingle ProgressEvent) {
}

void UCommonActivatablePanel::AddInputActionHandlerWithPopup(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent, UCommonPopupMenu* PopupMenu) {
}

void UCommonActivatablePanel::AddInputActionHandler(UDataTable* DataTable, FName RowName, FCommonActionCommited CommitedEvent) {
}

UCommonActivatablePanel::UCommonActivatablePanel() {
    this->bConsumeAllActions = false;
    this->bExposeActionsExternally = true;
    this->bShouldBypassStack = false;
}

