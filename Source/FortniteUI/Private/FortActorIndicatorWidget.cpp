#include "FortActorIndicatorWidget.h"

UFortActorIndicatorWidget::UFortActorIndicatorWidget() {
    this->IndicatedActor = NULL;
    this->IndicatedActorComponent = NULL;
    this->MaxDistance = 10000.00f;
    this->bClampOnScreen = false;
    this->bShowClampToScreenArrow = false;
    this->bUseScreenSpacePosition = false;
    this->ScreenPriority = 0;
}

