#include "FortSimpleWidgetAnimation.h"

FFortSimpleWidgetAnimation::FFortSimpleWidgetAnimation() {
    this->Translation = NULL;
    this->Scale = NULL;
    this->Alpha = NULL;
    this->bResetOnFinish = false;
    this->bShouldAnimateTranslation = false;
    this->bShouldAnimateScale = false;
    this->bShouldAnimateAlpha = false;
    this->World = NULL;
}

