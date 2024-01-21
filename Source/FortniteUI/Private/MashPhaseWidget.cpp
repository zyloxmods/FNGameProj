#include "MashPhaseWidget.h"





void UMashPhaseWidget::HandleMashPhaseChanged(int32 NewPhase) {
}

void UMashPhaseWidget::HandleCountdownUpdate() {
}

void UMashPhaseWidget::HandleCountdownStarted(const int32 TimeRemaining) {
}

void UMashPhaseWidget::HandleCountdownFinished() {
}

UMashPhaseWidget::UMashPhaseWidget() {
    this->CurrentPhase = EMashPhase::NotStarted;
    this->CurrentObjectiveAreaIndex = 0;
    this->MashMutatorRef = NULL;
}

