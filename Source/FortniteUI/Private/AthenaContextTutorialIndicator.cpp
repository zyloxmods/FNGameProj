#include "AthenaContextTutorialIndicator.h"

void UAthenaContextTutorialIndicator::SwitchIndicatorSize() {
}






float UAthenaContextTutorialIndicator::GetMinTreshold() const {
    return 0.0f;
}

float UAthenaContextTutorialIndicator::GetMaxTreshold() const {
    return 0.0f;
}

float UAthenaContextTutorialIndicator::GetMaxOffscreenTreshold() const {
    return 0.0f;
}

float UAthenaContextTutorialIndicator::GetCurrentDotProduct() const {
    return 0.0f;
}

UAthenaContextTutorialIndicator::UAthenaContextTutorialIndicator() {
    this->OffscreenMaxTreshold = 1;
    this->Overlay_Icon_1 = NULL;
    this->ScreenEdgePaddingSizePercent = 1;
}

