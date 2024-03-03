#include "FortCameraMode_Hoagie.h"

UFortCameraMode_Hoagie::UFortCameraMode_Hoagie() {
    this->CurrentRollMultiplier = 1;
    this->CurrentPitchMultiplier = 1;
    this->BaseRollMultiplier = 1;
    this->BasePitchMultiplier = 1;
    this->BoostRollMultiplier = 1;
    this->BoostPitchMultiplier = 1;
    this->BoostRollDampFactor = 1;
    this->BoostRollRecoveryDampFactor = 1;
    this->BoostRecoveryInterpSpeed = 1;
}

