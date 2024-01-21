#include "CommonVisibilityWidget.h"

UCommonVisibilityWidget::UCommonVisibilityWidget() {
    this->bShowForGamepad = true;
    this->bShowForMouseAndKeyboard = true;
    this->bShowForTouch = true;
    this->bShowForPC = true;
    this->bShowForMac = true;
    this->bShowForPS4 = true;
    this->bShowForXBox = true;
    this->bShowForIOS = true;
    this->bShowForAndroid = true;
    this->bShowForErebus = true;
    this->VisibleType = ESlateVisibility::SelfHitTestInvisible;
    this->HiddenType = ESlateVisibility::Collapsed;
}

