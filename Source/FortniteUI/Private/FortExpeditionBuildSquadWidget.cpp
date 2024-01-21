#include "FortExpeditionBuildSquadWidget.h"

bool UFortExpeditionBuildSquadWidget::StartExpedition() {
    return false;
}

void UFortExpeditionBuildSquadWidget::SetData_Implementation(UFortExpeditionItem* InItem) {
}

void UFortExpeditionBuildSquadWidget::SetCurrentSquadId(FName SquadId) {
}

void UFortExpeditionBuildSquadWidget::OnStartExpeditionCompleted_Implementation() {
}


void UFortExpeditionBuildSquadWidget::OnRefreshBuildSquadWidget_Implementation() {
}

bool UFortExpeditionBuildSquadWidget::IsSquadSlotLocked(int32 SlotIndex) const {
    return false;
}

bool UFortExpeditionBuildSquadWidget::IsExpeditionValidToStart() {
    return false;
}

void UFortExpeditionBuildSquadWidget::HandleStartExpeditionCompleted(const UFortExpeditionItem* Expedition, bool bSucceeded) {
}

void UFortExpeditionBuildSquadWidget::HandleDifferentSquadSlotSelected(const int32 SquadSlotIndex) {
}

void UFortExpeditionBuildSquadWidget::ClearTemporaryExpeditionSquadState(bool bPreviewOnly) {
}

UFortExpeditionBuildSquadWidget::UFortExpeditionBuildSquadWidget() {
    this->ExpeditionSquadSlotsView = NULL;
    this->ExpeditionSquadSlotDetails = NULL;
    this->ExpeditionSquadSlotPicker = NULL;
    this->ItemViewContext_ExpeditionSlotsView = NULL;
    this->ItemViewContext_ExpeditionSlotItemPicker = NULL;
}

