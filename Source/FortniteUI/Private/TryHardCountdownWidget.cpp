#include "TryHardCountdownWidget.h"


void UTryHardCountdownWidget::ShowWidget_Implementation(int32 NumRemaining) {
}

void UTryHardCountdownWidget::OnHandleSpectatingChanged(AFortPlayerStateZone* SpectatingTarget) {
}

void UTryHardCountdownWidget::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep) {
}

bool UTryHardCountdownWidget::IsShowing_Implementation() const {
    return false;
}

void UTryHardCountdownWidget::HideWidget_Implementation() {
}

UTryHardCountdownWidget::UTryHardCountdownWidget() {
    this->NumToStartShowingAt = 0;
}

