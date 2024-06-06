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
    SwimmingAssets1P[0] = NULL;
    SwimmingAssets1P[1] = NULL;
    SwimmingAssets1P[2] = NULL;
    SwimmingAssets1P[3] = NULL;
    SwimmingAssets1P[4] = NULL;
    SwimmingAssets1P[5] = NULL;
    SwimmingAssets1P[6] = NULL;
    SwimmingAssets1P[7] = NULL;
    SwimmingAssets3P[0] = NULL;
    SwimmingAssets3P[1] = NULL;
    SwimmingAssets3P[2] = NULL;
    SwimmingAssets3P[3] = NULL;
    SwimmingAssets3P[4] = NULL;
    SwimmingAssets3P[5] = NULL;
    SwimmingAssets3P[6] = NULL;
    SwimmingAssets3P[7] = NULL;
    TeammateVolumeMultiplier = 1;
    MaxSwimmingDistance = 1;
    RequiredImmersionDepth = 1;
}

