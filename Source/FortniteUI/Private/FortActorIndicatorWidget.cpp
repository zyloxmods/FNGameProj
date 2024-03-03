#include "FortActorIndicatorWidget.h"

void UFortActorIndicatorWidget::SetIndicatedActor(AActor* NewIndicatorActor) {
}

bool UFortActorIndicatorWidget::IsIndicatingActor(const AActor* OtherActor) const {
    return false;
}

UFortActorIndicatorWidget::UFortActorIndicatorWidget() {
    this->IndicatedActor = NULL;
    this->IndicatedActorComponent = NULL;
    this->MaxDistance = 1;
    this->bClampOnScreen = false;
    this->bShowClampToScreenArrow = false;
    this->bUseScreenSpacePosition = false;
    this->ScreenPriority = 0;
}

