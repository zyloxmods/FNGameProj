#include "ZiplinePawnState.h"

FZiplinePawnState::FZiplinePawnState() {
    Zipline = NULL;
    bIsZiplining = false;
    bJumped = false;
    AuthoritativeValue = 0;
    TimeZipliningBegan = 1;
    TimeZipliningEndedFromJump = 1;
}

