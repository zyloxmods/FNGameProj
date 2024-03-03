#include "FortAthenaMutator_Arsenic.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Arsenic::RequestGameMessageOnServer(EArsenicGameMsgId MsgId) const {
}

void AFortAthenaMutator_Arsenic::RequestGameMessageOnClient(EArsenicGameMsgId MsgId) const {
}

void AFortAthenaMutator_Arsenic::RefreshPlayerIndicators(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Arsenic::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContainerTags) {
}

bool AFortAthenaMutator_Arsenic::IsPlaylistDBNOEnabled() const {
    return false;
}

bool AFortAthenaMutator_Arsenic::IsPlayerTeamRevealed(const AFortPlayerStateAthena* PlayerState) const {
    return false;
}

bool AFortAthenaMutator_Arsenic::IsPlayerARevealedInfected(const AFortPlayerController* PC) const {
    return false;
}

bool AFortAthenaMutator_Arsenic::IsPawnAnInfected(const AFortPawn* Pawn) const {
    return false;
}

bool AFortAthenaMutator_Arsenic::IsHeartbeatEnabled() const {
    return false;
}

bool AFortAthenaMutator_Arsenic::IsHealOverTimeEnabled() const {
    return false;
}

bool AFortAthenaMutator_Arsenic::IsGrowlEnabled() const {
    return false;
}

FString AFortAthenaMutator_Arsenic::GetWinner() const {
    return TEXT("");
}

float AFortAthenaMutator_Arsenic::GetTimeRemaining() const {
    return 0.0f;
}

int32 AFortAthenaMutator_Arsenic::GetTeamPlayerCount(uint8 Team) {
    return 0;
}

void AFortAthenaMutator_Arsenic::EndGame(uint8 WinningTeam) {
}

void AFortAthenaMutator_Arsenic::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Arsenic, Winner);
    DOREPLIFETIME(AFortAthenaMutator_Arsenic, TagTeamInfo);
    DOREPLIFETIME(AFortAthenaMutator_Arsenic, PlayerDataArray);
    DOREPLIFETIME(AFortAthenaMutator_Arsenic, bCheatHeartbeatEnabled);
}

AFortAthenaMutator_Arsenic::AFortAthenaMutator_Arsenic() {
    this->Winner = TEXT("WinnerNotSet");
    this->bGameTimeExpired = false;
    this->HumanDeathSound = NULL;
    this->HumanTeam = 4;
    this->InfectedTeam = 3;
    this->ConsumePickupsMutator = NULL;
    this->CachedInventoryOverrideMutator = NULL;
    this->bCheatHeartbeatEnabled = true;
}

