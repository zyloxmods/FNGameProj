#include "FortPlayerTeamSettingsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerTeamSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerTeamSettingsComponent, TeamIndex);
    DOREPLIFETIME(UFortPlayerTeamSettingsComponent, bRunOutTimeToWin);
}

UFortPlayerTeamSettingsComponent::UFortPlayerTeamSettingsComponent() {
    TeamIndex = 255;
    TeamColorIndex = 0;
    bRunOutTimeToWin = false;
    DefaultClassSlot = 255;
    RespawnWaveType = ECreativeRespawnWaveType::None;
}

