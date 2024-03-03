#include "MashPhaseWidget.h"







void UMashPhaseWidget::HandlePlayersLeftChanged(int32 InPlayersLeft) {
}

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
    this->CachedLocalPlayerController = NULL;
    this->CachedIsLocalPlayerAlive = true;
}

