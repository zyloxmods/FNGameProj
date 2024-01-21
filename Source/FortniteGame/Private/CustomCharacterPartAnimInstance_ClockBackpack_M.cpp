#include "CustomCharacterPartAnimInstance_ClockBackpack_M.h"

void UCustomCharacterPartAnimInstance_ClockBackpack_M::PopOutCuckooOnKill() {
}

UCustomCharacterPartAnimInstance_ClockBackpack_M::UCustomCharacterPartAnimInstance_ClockBackpack_M() {
    this->AimOffsetMultiplier = -0.05f;
    this->BackpackRotatorBoneName = TEXT("spine_05");
    this->BackpackRotatorBaseName = TEXT("spine_01");
    this->PendulumFrequency = 250.00f;
    this->PendulumAmplitude = 20.00f;
    this->PendulumDynamicsAlpha = 0.00f;
    this->PendulumDynamicsSpeedThreshold = 225.00f;
    this->PendulumDynamicsCrouchWalkAlpha = 0.10f;
    this->HourHandPitchMultiplier = 30.00f;
    this->MinuteHandPitchMultiplier = 6.00f;
    this->bIsCuckooOut = false;
    this->bCuckooOutOnKillRequested = false;
    this->CuckooDynamicsAlpha = 0.00f;
    this->CuckooOutTimeRemaining = 0.00f;
    this->CuckooOutDurationOnKill = 2.00f;
    this->CuckooOutDurationInFrontEnd = 4.00f;
    this->CuckooFrontEndInterval = 15;
    this->DefaultLlamaScaleInterpSpeed = 15.00f;
    this->CuckooOutLlamaScaleInterpSpeed = 22.00f;
}

