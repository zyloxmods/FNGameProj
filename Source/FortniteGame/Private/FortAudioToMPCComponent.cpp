#include "FortAudioToMPCComponent.h"


float UFortAudioToMPCComponent::GetCachedMagnitudeForChannel(int32 ChannelIndex) const {
    return 0.0f;
}

float UFortAudioToMPCComponent::GetCachedAverageMagnitude() const {
    return 0.0f;
}

UFortAudioToMPCComponent::UFortAudioToMPCComponent() {
    bPushDataToMPC = true;
    bCacheDataForBlueprintUse = true;
    MaterialParameterCollection = NULL;
    bWasPlaying = false;
}

