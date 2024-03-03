#include "GameplayCueNotify_Jetpack_Hovering.h"



AGameplayCueNotify_Jetpack_Hovering::AGameplayCueNotify_Jetpack_Hovering() {
    this->bUsesFuel = false;
    this->OutOfFuelAudioCurve = NULL;
    this->AccelAudioComp = NULL;
    this->IdleAudioComp = NULL;
    this->OutOfFuelAudioComp = NULL;
    this->ParticleSystemComp = NULL;
    this->PlayerPawn = NULL;
    this->ActivationTime = 1;
    this->UpwardVelocity = 1;
    this->FuelVolumeMultiplier = 1;
    this->bPlayedFuelWarning = false;
}

