#include "FortCameraModeOverrideComponent.h"
#include "Net/UnrealNetwork.h"

void UFortCameraModeOverrideComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortCameraModeOverrideComponent, CameraModeOverride);
}

UFortCameraModeOverrideComponent::UFortCameraModeOverrideComponent() {
    CameraModeOverride = NULL;
}

