#include "CustomCharacterPartAnimInstance_DJBackpack.h"

UCustomCharacterPartAnimInstance_DJBackpack::UCustomCharacterPartAnimInstance_DJBackpack() {
    bIsKillCelebrationActive = false;
    KillCountLastFrame = 0;
    KillCount = 0;
    CurrentSpinRate = 1;
    BaseSpinRate = 1;
    SpinRateMultiplier = 1;
    DefaultSpinRate = 1;
    DefaultSpinRateInterpSpeed = 1;
    KillCelebrationSpinRate = 1;
    KillCelebrationSpinRateInterpSpeed = 1;
}

