#include "NitrogenObjectiveWidget.h"


void UNitrogenObjectiveWidget::SetShouldBeHidden(bool bInShouldBeHidden) {
}

void UNitrogenObjectiveWidget::OnEndFare(bool bFareCompleted) {
}

void UNitrogenObjectiveWidget::OnBeginFare() {
}

void UNitrogenObjectiveWidget::HandleVehicleExited() {
}

void UNitrogenObjectiveWidget::HandleVehicleEntered(AFortAthenaVehicle* NewVehicle) {
}

UNitrogenObjectiveWidget::UNitrogenObjectiveWidget() {
    this->ObjectiveWidgetState = ENitrogenObjectiveWidgetState::ENitrogenObjectiveWidgetState_Hidden;
}

