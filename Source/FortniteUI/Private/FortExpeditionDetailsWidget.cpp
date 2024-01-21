#include "FortExpeditionDetailsWidget.h"

void UFortExpeditionDetailsWidget::SetData_Implementation(UFortExpeditionItem* InItem) {
}

void UFortExpeditionDetailsWidget::SetCurrentSquadId(FName SquadId) {
}

void UFortExpeditionDetailsWidget::OnAbandonExpeditionCompleted_Implementation() {
}

void UFortExpeditionDetailsWidget::HandleAbandonExpeditionCompleted(const UFortExpeditionItem* Expedition, bool bSuccess) {
}

void UFortExpeditionDetailsWidget::AbandonExpedition() {
}

UFortExpeditionDetailsWidget::UFortExpeditionDetailsWidget() {
    this->ExpeditionSquadSlotsView = NULL;
    this->ItemViewContext_ExpeditionSlotsView = NULL;
}

