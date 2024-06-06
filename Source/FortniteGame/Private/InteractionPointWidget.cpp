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
    Switcher_Icons = NULL;
    TextBlock_Distance = NULL;
    TargetActor = NULL;
    bScaleIconByDistance = false;
    MinIconScale = 1;
    MinIconScaleDistance = 1;
    MaxIconScale = 1;
    MaxIconScaleDistance = 1;
    HideIconWhenCloseDistance = 1;
    DistanceUpdateInterval = 1;
    bValidSwitcher = false;
}

