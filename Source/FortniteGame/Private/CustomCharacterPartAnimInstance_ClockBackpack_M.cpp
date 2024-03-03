#include "CustomCharacterPartAnimInstance_ClockBackpack_M.h"

void UCustomCharacterPartAnimInstance_ClockBackpack_M::PopOutCuckooOnKill() {
}

UCustomCharacterPartAnimInstance_ClockBackpack_M::UCustomCharacterPartAnimInstance_ClockBackpack_M() {
    this->AimOffsetMultiplier = 1;
    this->BackpackRotatorBoneName = TEXT("spine_05");
    this->BackpackRotatorBaseName = TEXT("spine_01");
    this->PendulumFrequency = 1;
    this->PendulumAmplitude = 1;
    this->PendulumDynamicsAlpha = 1;
    this->PendulumDynamicsSpeedThreshold = 1;
    this->PendulumDynamicsCrouchWalkAlpha = 1;
    this->HourHandPitchMultiplier = 1;
    this->MinuteHandPitchMultiplier = 1;
    this->bIsCuckooOut = false;
    this->bCuckooOutOnKillRequested = false;
    this->CuckooDynamicsAlpha = 1;
    this->CuckooOutTimeRemaining = 1;
    this->CuckooOutDurationOnKill = 1;
    this->CuckooOutDurationInFrontEnd = 1;
    this->CuckooFrontEndInterval = 0;
    this->DefaultLlamaScaleInterpSpeed = 1;
    this->CuckooOutLlamaScaleInterpSpeed = 1;
}

