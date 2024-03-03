#include "ZiplinePawnState.h"

FZiplinePawnState::FZiplinePawnState() {
    this->Zipline = NULL;
    this->bIsZiplining = false;
    this->bJumped = false;
    this->AuthoritativeValue = 0;
    this->TimeZipliningBegan = 1;
    this->TimeZipliningEndedFromJump = 1;
}

