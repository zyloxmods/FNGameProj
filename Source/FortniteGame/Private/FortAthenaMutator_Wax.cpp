#include "FortAthenaMutator_Wax.h"
#include "FortAthena_WaxToken.h"
#include "FortGameModePickup_Wax.h"
#include "Net/UnrealNetwork.h"



bool AFortAthenaMutator_Wax::ShouldBeUI_Visible(AFortPlayerStateAthena* Player) const {
    return false;
}

void AFortAthenaMutator_Wax::OnRep_Leaders() {
}


void AFortAthenaMutator_Wax::OnNewGamePhase(EAthenaGamePhase NewPhase) {
}



bool AFortAthenaMutator_Wax::IsPlayerTeamLeader(AFortPlayerStateAthena* Player) const {
    return false;
}

bool AFortAthenaMutator_Wax::IsPlayerMovingOrShooting(AFortPlayerStateAthena* Player) const {
    return false;
}

bool AFortAthenaMutator_Wax::IsPlayerInPodium(AFortPlayerStateAthena* Player) const {
    return false;
}

void AFortAthenaMutator_Wax::GetWaxUI_Info(float& MyPercent, float& Enemy1Pct, float& Enemy2Pct, float& Enemy3Pct, int32& MyRank) {
}

int32 AFortAthenaMutator_Wax::GetTokensToWinBP() {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetTokensForPlayer(AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerTeamScore(AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerTeamPlacement(AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerPlacement(AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Wax::GetPlayerLives(AFortPlayerStateAthena* Player) const {
    return 0;
}

EWaxState AFortAthenaMutator_Wax::GetCurrentWaxState(AFortPlayerStateAthena* Player) const {
    return EWaxState::None;
}


void AFortAthenaMutator_Wax::CommonDeadPawn(AFortPlayerPawnAthena* DeadPawn) {
}

void AFortAthenaMutator_Wax::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Wax, TeamLeadersInOrder);
    DOREPLIFETIME(AFortAthenaMutator_Wax, PlayerData);
}

AFortAthenaMutator_Wax::AFortAthenaMutator_Wax() {
    TokenClass = AFortAthena_WaxToken::StaticClass();
    TokenPickupClass = AFortGameModePickup_Wax::StaticClass();
    PickupItemDef = NULL;
    LastEligibleLeader = NULL;
    FirstPlaceIfAboveThreshold = NULL;
    SecondPlaceIfAboveThreshold = NULL;
    ThirdPlaceIfAboveThreshold = NULL;
}

