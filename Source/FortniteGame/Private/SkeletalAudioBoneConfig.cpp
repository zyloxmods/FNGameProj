#include "SkeletalAudioBoneConfig.h"

FSkeletalAudioBoneConfig::FSkeletalAudioBoneConfig() {
    this->SoundLoop = NULL;
    this->SoundMediumDelta = NULL;
    this->SoundHighDelta = NULL;
    this->ThresholdLoop = 1;
    this->ThresholdMedium = 1;
    this->ThresholdHigh = 1;
    this->RetriggerDelay = 1;
    this->TrackingSpace = ESkeletalAudioBoneSpace::Relative;
    this->VelocityTrackingType = ESkeletalAudioBoneVelocityType::Linear;
}

