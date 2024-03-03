#include "FortPlayerHealthInfoComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerHealthInfoComponent::OnRep_TeamHealthInfoArray() {
}

void UFortPlayerHealthInfoComponent::OnHealthChanged(AFortTeamHealthInfo* TeamHealthInfo) {
}

void UFortPlayerHealthInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerHealthInfoComponent, TeamHealthInfoArray);
}

UFortPlayerHealthInfoComponent::UFortPlayerHealthInfoComponent() {
}

