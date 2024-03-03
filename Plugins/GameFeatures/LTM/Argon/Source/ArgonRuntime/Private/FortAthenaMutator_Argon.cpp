#include "FortAthenaMutator_Argon.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Argon::SortClientTicketComponents() {
}

void AFortAthenaMutator_Argon::OnRep_TeamTicketCounts() {
}

void AFortAthenaMutator_Argon::OnRep_RacingPlayersByPlace() {
}

void AFortAthenaMutator_Argon::OnRep_NumSupplyDropClustersSpawned() {
}

void AFortAthenaMutator_Argon::OnRep_EndTraversePoint() {
}

void AFortAthenaMutator_Argon::OnRep_CurrentRaceState() {
}

void AFortAthenaMutator_Argon::OnEndTraversePointTouched(AAthenaTraversePoint* PointActor, AFortPlayerStateAthena* TouchingPlayer) {
}

bool AFortAthenaMutator_Argon::IsUsingRespawnAndSpectateSelectMutator() const {
    return false;
}

bool AFortAthenaMutator_Argon::HasTeamFinishedRace(uint8 Team) const {
    return false;
}

bool AFortAthenaMutator_Argon::HasPlayerFinishedRace(const AFortPlayerStateAthena* PlayerState) const {
    return false;
}

void AFortAthenaMutator_Argon::HandlePlayerTeleportComplete(AFortPlayerStateAthena* PlayerState) {
}

void AFortAthenaMutator_Argon::HandleGroupTeleportComplete() {
}

void AFortAthenaMutator_Argon::HandleGameStartCountdownEnd() {
}

UFortWorldItemDefinition* AFortAthenaMutator_Argon::GetTicketItemDefinition() const {
    return NULL;
}

float AFortAthenaMutator_Argon::GetRandomStartingLineEmotePlayRate() const {
    return 0.0f;
}

float AFortAthenaMutator_Argon::GetRaceTimeElapsed() const {
    return 0.0f;
}

void AFortAthenaMutator_Argon::GetProgressBarUIInfo(float& OutMyPercent, TArray<float>& OutSquadmatePcts, uint8& OutNumSquadTickets, TArray<FArgonTeamProgressBarInfo>& OutEnemyProgressInfos) {
}

int32 AFortAthenaMutator_Argon::GetPlayerTeamPlacement(AFortPlayerStateAthena* Player) const {
    return 0;
}

int32 AFortAthenaMutator_Argon::GetNumberOfTicketsTeamHasAcquired(uint8 Team) const {
    return 0;
}

int32 AFortAthenaMutator_Argon::GetNumberOfTicketsNeededToFinishRace() const {
    return 0;
}

AArgonTraversePoint* AFortAthenaMutator_Argon::GetEndTraversePoint() const {
    return NULL;
}

bool AFortAthenaMutator_Argon::DidPlayerCrossFinishLine(const AFortPlayerStateAthena* PlayerState) const {
    return false;
}

void AFortAthenaMutator_Argon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Argon, StartingPoint);
    DOREPLIFETIME(AFortAthenaMutator_Argon, CurrentRaceState);
    DOREPLIFETIME(AFortAthenaMutator_Argon, RacingPlayersByPlace);
    DOREPLIFETIME(AFortAthenaMutator_Argon, LeaderProgressInfos);
    DOREPLIFETIME(AFortAthenaMutator_Argon, TeamTicketCounts);
    DOREPLIFETIME(AFortAthenaMutator_Argon, EndTraversePoint);
    DOREPLIFETIME(AFortAthenaMutator_Argon, NumSupplyDropClustersSpawned);
    DOREPLIFETIME(AFortAthenaMutator_Argon, RaceStartTime);
    DOREPLIFETIME(AFortAthenaMutator_Argon, FinishedPlayerPawns);
}

AFortAthenaMutator_Argon::AFortAthenaMutator_Argon() {
    this->EndLocationCompassBrush_YOffset = 1;
    this->EndLocationCompassBrush_MinScale = 1;
    this->EndLocationCompassBrush_MaxScale = 1;
    this->EndLocationCompassBrush_DistanceForMinScale = 1;
    this->EndLocationCompassBrush_DistanceForMaxScale = 1;
    this->TicketItemDefinition = NULL;
    this->NumEnemiesTrackedOnProgressBarUI = 0;
    this->NumSquadmatesTrackedOnProgressBarUI = 0;
    this->EntireSquadDeadRespawnActorClass = NULL;
    this->SupplyDropPercentCurve = NULL;
    this->StartingLineEmote = NULL;
    this->FinishedRaceEmote = NULL;
    this->SquadmateVictoryVFXTemplate = NULL;
    this->FinishedPlayerDespawnVFXTemplate = NULL;
    this->TicketCompassBrush_YOffset = 1;
    this->TicketCompassBrush_Scale = 1;
    this->JumpBoostPackAbilityClass = NULL;
    this->SquadStartHoldingArea = NULL;
    this->EndTraversePoint = NULL;
    this->TeleportMutator = NULL;
    this->GameStartCountdownMutator = NULL;
    this->RespawnAndSpectateSelectMutator = NULL;
    this->NumSupplyDropClustersSpawned = 0;
    this->RaceStartTime = 1;
}

