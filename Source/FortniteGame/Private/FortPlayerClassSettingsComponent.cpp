#include "FortPlayerClassSettingsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerClassSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerClassSettingsComponent, ClassSlotIndex);
}

UFortPlayerClassSettingsComponent::UFortPlayerClassSettingsComponent() {
    ClassSlotIndex = 255;
}

