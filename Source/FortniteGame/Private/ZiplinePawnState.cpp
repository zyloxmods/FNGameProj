#include "ZiplinePawnState.h"

FZiplinePawnState::FZiplinePawnState() {
    this->Zipline = NULL;
    this->bIsZiplining = false;
    this->bJumped = false;
    this->AuthoritativeValue = 0;
    this->TimeZipliningBegan = 0.00f;
    this->TimeZipliningEndedFromJump = 0.00f;
}

