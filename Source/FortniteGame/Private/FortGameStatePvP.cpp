#include "FortGameStatePvP.h"
#include "Net/UnrealNetwork.h"

void AFortGameStatePvP::SetMatchLevel(int32 InMatchLevel) {
}

void AFortGameStatePvP::SetGameDifficultyRow(const FDataTableRowHandle& GameDifficultyInfo) {
}

void AFortGameStatePvP::OnRep_StalemateTimeRemaining() {
}

void AFortGameStatePvP::OnRep_RoundTimeRemaining() {
}

void AFortGameStatePvP::OnRep_MatchLevel() {
}

void AFortGameStatePvP::OnRep_ItemCollector() {
}

bool AFortGameStatePvP::IsExperimentalCraftingFeatureActive() const {
    return false;
}

int32 AFortGameStatePvP::GetTotalHomebaseRating() const {
    return 0;
}

int32 AFortGameStatePvP::GetStartMatchDelayTimer() const {
    return 0;
}

int32 AFortGameStatePvP::GetRoundTimeAccumulated() const {
    return 0;
}

int32 AFortGameStatePvP::GetMatchLevel() const {
    return 0;
}

ABuildingItemCollectorActor* AFortGameStatePvP::GetItemCollector() {
    return NULL;
}

int32 AFortGameStatePvP::GetFOBFinalizationTimeRemaining() const {
    return 0;
}

int32 AFortGameStatePvP::GetAverageHomebaseRating() const {
    return 0;
}

void AFortGameStatePvP::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortGameStatePvP, RoundTimeLimit);
    DOREPLIFETIME(AFortGameStatePvP, RoundTimeAccumulated);
    DOREPLIFETIME(AFortGameStatePvP, RoundTimeCriticalThreshold);
    DOREPLIFETIME(AFortGameStatePvP, RoundTimeRemaining);
    DOREPLIFETIME(AFortGameStatePvP, StalemateTimeLimit);
    DOREPLIFETIME(AFortGameStatePvP, StalemateTimeRemaining);
    DOREPLIFETIME(AFortGameStatePvP, RestartTimeRemaining);
    DOREPLIFETIME(AFortGameStatePvP, FOBFinalizationTimeRemaining);
    DOREPLIFETIME(AFortGameStatePvP, CapturePoints);
    DOREPLIFETIME(AFortGameStatePvP, ItemCollector);
    DOREPLIFETIME(AFortGameStatePvP, StartMatchDelayTimer);
    DOREPLIFETIME(AFortGameStatePvP, MatchLevel);
}

AFortGameStatePvP::AFortGameStatePvP() {
    this->RoundTimeLimit = -1;
    this->RoundTimeAccumulated = -1;
    this->RoundTimeCriticalThreshold = 0;
    this->RoundTimeRemaining = -1;
    this->StalemateTimeLimit = -1;
    this->StalemateTimeRemaining = -1;
    this->RestartTimeRemaining = -1;
    this->FOBFinalizationTimeRemaining = -1;
    this->ItemCollector = NULL;
    this->StartMatchDelayTimer = 180;
    this->bGateCraftingOnTeamLevel = true;
    this->MatchLevelCurve = NULL;
    this->MatchLevel = 1;
    this->TotalHomebaseRating = -1;
    this->AverageHomebaseRating = -1;
    this->bUseExperimentalCraftingFeature = false;
}

