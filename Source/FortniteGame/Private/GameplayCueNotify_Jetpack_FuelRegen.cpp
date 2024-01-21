#include "GameplayCueNotify_Jetpack_FuelRegen.h"

void AGameplayCueNotify_Jetpack_FuelRegen::ResetBlink_Implementation(AFortPlayerPawn* PlayerPawn) {
}

AGameplayCueNotify_Jetpack_FuelRegen::AGameplayCueNotify_Jetpack_FuelRegen() {
    this->bAudioEnabled = false;
    this->OnFuelRegenRampComponent = NULL;
    this->FuelRegenRampVolumeMultiplier = 0.00f;
    this->SoundOnFuelChangeRamp = NULL;
    this->SoundOnFuelRecharged = NULL;
    this->FuelRegenRampVolumeCurve = NULL;
}

