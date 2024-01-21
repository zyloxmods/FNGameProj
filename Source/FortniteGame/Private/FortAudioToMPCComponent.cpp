#include "FortAudioToMPCComponent.h"


float UFortAudioToMPCComponent::GetCachedMagnitudeForChannel(int32 ChannelIndex) const {
    return 0.0f;
}

float UFortAudioToMPCComponent::GetCachedAverageMagnitude() const {
    return 0.0f;
}

UFortAudioToMPCComponent::UFortAudioToMPCComponent() {
    this->bPushDataToMPC = true;
    this->bCacheDataForBlueprintUse = true;
    this->MaterialParameterCollection = NULL;
    this->bWasPlaying = false;
}

