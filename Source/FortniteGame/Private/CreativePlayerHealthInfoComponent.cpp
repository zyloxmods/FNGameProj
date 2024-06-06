#include "CreativePlayerHealthInfoComponent.h"
#include "Net/UnrealNetwork.h"

void UCreativePlayerHealthInfoComponent::OnRep_BossPlayerState() {
}

void UCreativePlayerHealthInfoComponent::OnMinigameStarted() {
}

void UCreativePlayerHealthInfoComponent::OnMinigamePlayerLeftMinigame(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer) {
}

void UCreativePlayerHealthInfoComponent::OnMinigamePlayerJoinedMinigame(FUniqueNetIdRepl UniqueNetId, bool bIsLocalPlayer) {
}

void UCreativePlayerHealthInfoComponent::OnMinigamePlayerDeadStateChanged(AFortPlayerStateAthena* PlayerState, bool bIsDead) {
}

void UCreativePlayerHealthInfoComponent::OnMinigamePlayerClassApplied(AFortPlayerState* PlayerState, uint8 ClassSlotIndex) {
}

void UCreativePlayerHealthInfoComponent::OnMinigamePlayerChangedTeam(AFortPlayerState* PlayerState, uint8 TeamId, uint8 OldTeamId, bool bTeamChangedWithoutRespawn) {
}

void UCreativePlayerHealthInfoComponent::OnMinigameEnded() {
}

void UCreativePlayerHealthInfoComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UCreativePlayerHealthInfoComponent, BossPlayerState);
}

UCreativePlayerHealthInfoComponent::UCreativePlayerHealthInfoComponent() {
    ControllingMinigame = NULL;
    BossPlayerState = NULL;
}

