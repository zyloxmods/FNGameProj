#include "CustomCharacterPartAnimInstance_DJBackpack.h"

UCustomCharacterPartAnimInstance_DJBackpack::UCustomCharacterPartAnimInstance_DJBackpack() {
    this->bIsKillCelebrationActive = false;
    this->KillCountLastFrame = 0;
    this->KillCount = 0;
    this->CurrentSpinRate = 0.00f;
    this->BaseSpinRate = 1.00f;
    this->SpinRateMultiplier = 0.85f;
    this->DefaultSpinRate = 1.00f;
    this->DefaultSpinRateInterpSpeed = 1.00f;
    this->KillCelebrationSpinRate = 25.00f;
    this->KillCelebrationSpinRateInterpSpeed = 4.00f;
}

