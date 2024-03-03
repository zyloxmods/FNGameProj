#include "FortSwimmingAudioBank.h"

float UFortSwimmingAudioBank::GetTeammateVolumeMultiplier() {
    return 0.0f;
}

USoundBase* UFortSwimmingAudioBank::GetSoundAsset(bool bIsLocal, TEnumAsByte<EFortSwimmingAudioType::Type> SwimType) {
    return NULL;
}

float UFortSwimmingAudioBank::GetRequiredImmersionDepth() {
    return 0.0f;
}

UFortSwimmingAudioBank::UFortSwimmingAudioBank() {
    this->SwimmingAssets1P[0] = NULL;
    this->SwimmingAssets1P[1] = NULL;
    this->SwimmingAssets1P[2] = NULL;
    this->SwimmingAssets1P[3] = NULL;
    this->SwimmingAssets1P[4] = NULL;
    this->SwimmingAssets1P[5] = NULL;
    this->SwimmingAssets1P[6] = NULL;
    this->SwimmingAssets1P[7] = NULL;
    this->SwimmingAssets3P[0] = NULL;
    this->SwimmingAssets3P[1] = NULL;
    this->SwimmingAssets3P[2] = NULL;
    this->SwimmingAssets3P[3] = NULL;
    this->SwimmingAssets3P[4] = NULL;
    this->SwimmingAssets3P[5] = NULL;
    this->SwimmingAssets3P[6] = NULL;
    this->SwimmingAssets3P[7] = NULL;
    this->TeammateVolumeMultiplier = 1;
    this->MaxSwimmingDistance = 1;
    this->RequiredImmersionDepth = 1;
}

