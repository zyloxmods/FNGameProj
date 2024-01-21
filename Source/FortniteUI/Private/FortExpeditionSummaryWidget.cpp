#include "FortExpeditionSummaryWidget.h"

void UFortExpeditionSummaryWidget::UnbindInventoryDelegates() {
}

void UFortExpeditionSummaryWidget::OnRefreshSummaryWidget_Implementation() {
}

void UFortExpeditionSummaryWidget::BindInventoryDelegates() {
}

UFortExpeditionSummaryWidget::UFortExpeditionSummaryWidget() {
    this->AvailableExpeditions = 0;
    this->CompletedExpeditions = 0;
    this->LandVehiclesTotal = 0;
    this->LandVehiclesAvailable = 0;
    this->AirVehiclesTotal = 0;
    this->AirVehiclesAvailable = 0;
    this->SeaVehiclesTotal = 0;
    this->SeaVehiclesAvailable = 0;
    this->LandExpeditionsTotal = 0;
    this->LandExpeditionsAvailable = 0;
    this->AirExpeditionsTotal = 0;
    this->AirExpeditionsAvailable = 0;
    this->SeaExpeditionsTotal = 0;
    this->SeaExpeditionsAvailable = 0;
}

