#include "FortPlayerTeamSettingsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortPlayerTeamSettingsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortPlayerTeamSettingsComponent, TeamIndex);
    DOREPLIFETIME(UFortPlayerTeamSettingsComponent, bRunOutTimeToWin);
}

UFortPlayerTeamSettingsComponent::UFortPlayerTeamSettingsComponent() {
    this->TeamIndex = 255;
    this->TeamColorIndex = 0;
    this->bRunOutTimeToWin = false;
    this->DefaultClassSlot = 255;
    this->RespawnWaveType = ECreativeRespawnWaveType::None;
}

