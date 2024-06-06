#include "SkeletalAudioBoneConfig.h"

FSkeletalAudioBoneConfig::FSkeletalAudioBoneConfig() {
    SoundLoop = NULL;
    SoundMediumDelta = NULL;
    SoundHighDelta = NULL;
    ThresholdLoop = 1;
    ThresholdMedium = 1;
    ThresholdHigh = 1;
    RetriggerDelay = 1;
    TrackingSpace = ESkeletalAudioBoneSpace::Relative;
    VelocityTrackingType = ESkeletalAudioBoneVelocityType::Linear;
}

