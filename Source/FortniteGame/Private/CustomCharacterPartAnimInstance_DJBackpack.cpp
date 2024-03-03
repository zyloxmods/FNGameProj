#include "CustomCharacterPartAnimInstance_DJBackpack.h"

UCustomCharacterPartAnimInstance_DJBackpack::UCustomCharacterPartAnimInstance_DJBackpack() {
    this->bIsKillCelebrationActive = false;
    this->KillCountLastFrame = 0;
    this->KillCount = 0;
    this->CurrentSpinRate = 1;
    this->BaseSpinRate = 1;
    this->SpinRateMultiplier = 1;
    this->DefaultSpinRate = 1;
    this->DefaultSpinRateInterpSpeed = 1;
    this->KillCelebrationSpinRate = 1;
    this->KillCelebrationSpinRateInterpSpeed = 1;
}

