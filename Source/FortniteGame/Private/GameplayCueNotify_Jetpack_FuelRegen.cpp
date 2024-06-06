#include "GameplayCueNotify_Jetpack_FuelRegen.h"

void AGameplayCueNotify_Jetpack_FuelRegen::ResetBlink_Implementation(AFortPlayerPawn* PlayerPawn) {
}

AGameplayCueNotify_Jetpack_FuelRegen::AGameplayCueNotify_Jetpack_FuelRegen() {
    bAudioEnabled = false;
    OnFuelRegenRampComponent = NULL;
    FuelRegenRampVolumeMultiplier = 1;
    SoundOnFuelChangeRamp = NULL;
    SoundOnFuelRecharged = NULL;
    FuelRegenRampVolumeCurve = NULL;
}

