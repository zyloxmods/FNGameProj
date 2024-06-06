#include "FortGameplayMessageDispatcherComponent.h"

void UFortGameplayMessageDispatcherComponent::OnVolumeStateChanged(EVolumeState NewState, AFortVolume* ChangedVolume) {
}

UFortGameplayMessageDispatcherComponent::UFortGameplayMessageDispatcherComponent() {
    NumBoundReceivers = 0;
    NumBoundTriggers = 0;
}

