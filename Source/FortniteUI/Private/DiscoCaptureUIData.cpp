#include "DiscoCaptureUIData.h"

FDiscoCaptureUIData::FDiscoCaptureUIData() {
    this->CurrDisplayState = EDiscoCaptureUIState::None;
    this->CapturePoint = NULL;
    this->CurrPawn = NULL;
    this->CurrMID = NULL;
    this->FillAmount = 1;
}

