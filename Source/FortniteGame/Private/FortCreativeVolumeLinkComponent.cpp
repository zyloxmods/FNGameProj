#include "FortCreativeVolumeLinkComponent.h"

void UFortCreativeVolumeLinkComponent::OnLinkedVolumeSettingsChanged(const FPropertyOverrideData& OverrideData) {
}

AFortVolume* UFortCreativeVolumeLinkComponent::GetLinkedVolume() {
    return NULL;
}

UFortCreativeVolumeLinkComponent::UFortCreativeVolumeLinkComponent() {
    this->LinkedVolume = NULL;
    this->bShouldFindVolumeAtStart = true;
}

