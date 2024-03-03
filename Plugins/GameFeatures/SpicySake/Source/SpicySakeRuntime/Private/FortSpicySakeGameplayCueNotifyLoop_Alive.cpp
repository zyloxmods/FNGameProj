#include "FortSpicySakeGameplayCueNotifyLoop_Alive.h"

AFortSpicySakeGameplayCueNotifyLoop_Alive::AFortSpicySakeGameplayCueNotifyLoop_Alive() {
    this->WaterFX_Native = NULL;
    this->LandFX_Native = NULL;
    this->FortLayerAudio_Native = NULL;
    this->TargetAIPawn_Native = NULL;
    this->bComputeWaterDepth = true;
    this->TetheredVolumeMultiplier = 1;
    this->SoundSurfaceTypeCount = 1;
    this->VelocityClampingMinimum = 1;
    this->VelocityClampingMaximum = 1;
}

