#include "FortMissionActivationWidget.h"

void UFortMissionActivationWidget::RequestStartObjectiveState() {
}

void UFortMissionActivationWidget::RequestDifficultyIncreaseState() {
}

void UFortMissionActivationWidget::RequestDefaultState() {
}





EFortMissionActivationWidgetState UFortMissionActivationWidget::GetCurrentState() const {
    return EFortMissionActivationWidgetState::Default;
}

UFortMissionActivationWidget::UFortMissionActivationWidget() {
    this->InfoObject = NULL;
    this->DifficultyIncreaseBluGloCurve = NULL;
}

