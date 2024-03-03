#include "NitrogenSpeedyBonusTimerWidget.h"




void UNitrogenSpeedyBonusTimerWidget::OnEndFare_Implementation(bool bFareCompleted) {
}

void UNitrogenSpeedyBonusTimerWidget::OnBeginFare_Implementation() {
}

UNitrogenSpeedyBonusTimerWidget::UNitrogenSpeedyBonusTimerWidget() {
    this->CurrentFare = NULL;
    this->SecondsRemaining = 1;
}

