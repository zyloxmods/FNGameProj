#include "FortLobbyBeaconPlayerState.h"
#include "Net/UnrealNetwork.h"

void AFortLobbyBeaconPlayerState::OnRep_LobbyTimeRemaining() {
}

void AFortLobbyBeaconPlayerState::OnRep_HomeBaseVersion() {
}

void AFortLobbyBeaconPlayerState::OnRep_HeroType() {
}

void AFortLobbyBeaconPlayerState::OnRep_HeroId() {
}

void AFortLobbyBeaconPlayerState::OnRep_Gadgets() {
}

void AFortLobbyBeaconPlayerState::OnRep_ConsoleUniqueNetId() {
}

void AFortLobbyBeaconPlayerState::OnRep_CharXP() {
}

void AFortLobbyBeaconPlayerState::OnRep_CharacterGender() {
}

void AFortLobbyBeaconPlayerState::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, ConsoleUniqueNetId);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, Platform);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, TeamAffiliation);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, CurrentCharXP);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, MatchmakingLevel);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, HeroId);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, HeroType);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, LobbyTimeRemaining);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, HomeBaseVersion);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, SelectedGadgets);
    DOREPLIFETIME(AFortLobbyBeaconPlayerState, CharacterGender);
}

AFortLobbyBeaconPlayerState::AFortLobbyBeaconPlayerState() {
    this->TeamAffiliation = 0;
    this->CurrentCharXP = 0;
    this->MatchmakingLevel = 0;
    this->HeroType = NULL;
    this->LobbyTimeRemaining = 120;
    this->HomeBaseVersion = 0;
    this->SelectedGadgets.AddDefaulted(2);
    this->TrustedPlatformType = ETrustedPlatformType::Unknown;
    this->CharacterGender = EFortCustomGender::Invalid;
}

