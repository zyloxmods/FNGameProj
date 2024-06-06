#include "FortCreativeVolumeLinkComponent.h"
#include "Net/UnrealNetwork.h"

void UFortCreativeVolumeLinkComponent::OnRep_LinkedVolume() {
}

void UFortCreativeVolumeLinkComponent::OnLinkedVolumeSettingsChanged(const FPropertyOverrideData& OverrideData) {
}

AFortVolume* UFortCreativeVolumeLinkComponent::GetLinkedVolume() {
    return NULL;
}

void UFortCreativeVolumeLinkComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCreativeVolumeLinkComponent, LinkedVolume);
}

UFortCreativeVolumeLinkComponent::UFortCreativeVolumeLinkComponent() {
    LinkedVolume = NULL;
    bShouldFindVolumeAtStart = true;
}

