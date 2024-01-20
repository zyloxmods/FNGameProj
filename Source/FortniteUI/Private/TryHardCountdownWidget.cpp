#include "TryHardCountdownWidget.h"


void UTryHardCountdownWidget::ShowWidget_Implementation(int32 NumRemaining) {
}

void UTryHardCountdownWidget::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void UTryHardCountdownWidget::OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep) {
}

bool UTryHardCountdownWidget::IsShowing_Implementation() const {
    return false;
}

void UTryHardCountdownWidget::HideWidget_Implementation() {
}

UTryHardCountdownWidget::UTryHardCountdownWidget() {
    this->NumToStartShowingAt = 10;
}

