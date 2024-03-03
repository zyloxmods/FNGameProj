#include "DiscoCaptureIconData.h"

FDiscoCaptureIconData::FDiscoCaptureIconData() {
    this->CurrIconState = EDiscoCaptureIconState::None;
    this->CurrProgressState = EDiscoCaptureProgressState::None;
    this->CurrCapturePercent = 1;
    this->CapturePoint = NULL;
}

