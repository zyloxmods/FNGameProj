#include "DiscoCaptureIconData.h"

FDiscoCaptureIconData::FDiscoCaptureIconData() {
    this->CurrIconState = EDiscoCaptureIconState::None;
    this->CurrProgressState = EDiscoCaptureProgressState::None;
    this->CurrCapturePercent = 0.00f;
    this->CapturePoint = NULL;
}

