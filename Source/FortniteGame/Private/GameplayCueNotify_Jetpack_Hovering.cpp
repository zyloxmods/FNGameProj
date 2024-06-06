#include "GameplayCueNotify_Jetpack_Hovering.h"



AGameplayCueNotify_Jetpack_Hovering::AGameplayCueNotify_Jetpack_Hovering() {
    bUsesFuel = false;
    OutOfFuelAudioCurve = NULL;
    AccelAudioComp = NULL;
    IdleAudioComp = NULL;
    OutOfFuelAudioComp = NULL;
    ParticleSystemComp = NULL;
    PlayerPawn = NULL;
    ActivationTime = 1;
    UpwardVelocity = 1;
    FuelVolumeMultiplier = 1;
    bPlayedFuelWarning = false;
}

