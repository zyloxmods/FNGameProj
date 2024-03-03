#include "FortGameplayMessageDispatcherComponent.h"

void UFortGameplayMessageDispatcherComponent::OnVolumeStateChanged(EVolumeState NewState, AFortVolume* ChangedVolume) {
}

UFortGameplayMessageDispatcherComponent::UFortGameplayMessageDispatcherComponent() {
    this->NumBoundReceivers = 0;
    this->NumBoundTriggers = 0;
}

