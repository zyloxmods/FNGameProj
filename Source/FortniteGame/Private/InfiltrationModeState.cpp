#include "InfiltrationModeState.h"

FInfiltrationModeState::FInfiltrationModeState() {
    this->IntelDownloaded = 0;
    this->IntelCaptured = 0;
    this->TotalTime = 1;
    this->TotalGroundTime = 1;
    this->CurrentRound = 0;
    this->bGameOver = false;
}

