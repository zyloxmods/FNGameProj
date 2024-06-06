#include "CustomCharacterPartAnimInstance_ClockBackpack_M.h"

void UCustomCharacterPartAnimInstance_ClockBackpack_M::PopOutCuckooOnKill() {
}

UCustomCharacterPartAnimInstance_ClockBackpack_M::UCustomCharacterPartAnimInstance_ClockBackpack_M() {
    AimOffsetMultiplier = 1;
    BackpackRotatorBoneName = TEXT("spine_05");
    BackpackRotatorBaseName = TEXT("spine_01");
    PendulumFrequency = 1;
    PendulumAmplitude = 1;
    PendulumDynamicsAlpha = 1;
    PendulumDynamicsSpeedThreshold = 1;
    PendulumDynamicsCrouchWalkAlpha = 1;
    HourHandPitchMultiplier = 1;
    MinuteHandPitchMultiplier = 1;
    bIsCuckooOut = false;
    bCuckooOutOnKillRequested = false;
    CuckooDynamicsAlpha = 1;
    CuckooOutTimeRemaining = 1;
    CuckooOutDurationOnKill = 1;
    CuckooOutDurationInFrontEnd = 1;
    CuckooFrontEndInterval = 0;
    DefaultLlamaScaleInterpSpeed = 1;
    CuckooOutLlamaScaleInterpSpeed = 1;
}

