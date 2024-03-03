#include "InteractionPointWidget.h"

void UInteractionPointWidget::UpdateDistance() {
}

void UInteractionPointWidget::StopDistanceUpdateTimer() {
}

void UInteractionPointWidget::StartDistanceUpdateTimer() {
}

void UInteractionPointWidget::SetDistanceText(float Distance) {
}

UInteractionPointWidget::UInteractionPointWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->Switcher_Icons = NULL;
    this->TextBlock_Distance = NULL;
    this->TargetActor = NULL;
    this->bScaleIconByDistance = false;
    this->MinIconScale = 1;
    this->MinIconScaleDistance = 1;
    this->MaxIconScale = 1;
    this->MaxIconScaleDistance = 1;
    this->HideIconWhenCloseDistance = 1;
    this->DistanceUpdateInterval = 1;
    this->bValidSwitcher = false;
}

