#include "FortCreativeRoundSettings.h"

void AFortCreativeRoundSettings::SetResourceGivenToWinnersPerRound(const EFortResourceType InResourceType, const int32 Amount) {
}

void AFortCreativeRoundSettings::SetResourceGivenPerRound(const EFortResourceType InResourceType, const int32 Amount) {
}

bool AFortCreativeRoundSettings::IsActive() const {
    return false;
}

int32 AFortCreativeRoundSettings::GetRoundIndex() const {
    return 0;
}

int32 AFortCreativeRoundSettings::GetResourceGivenToWinnersPerRound(const EFortResourceType InResourceType) const {
    return 0;
}

int32 AFortCreativeRoundSettings::GetResourceGivenPerRound(const EFortResourceType InResourceType) const {
    return 0;
}

void AFortCreativeRoundSettings::EndRound(AFortPlayerController* InstigatorPC) {
}

void AFortCreativeRoundSettings::ClearResourcesGivenToWinnersPerRound() {
}

void AFortCreativeRoundSettings::ClearResourcesGivenPerRound() {
}

AFortCreativeRoundSettings::AFortCreativeRoundSettings() {
    this->RoundIndex = 0;
    this->KeepItemsBetweenRounds = 0;
    this->PercentageOfResourcesKeptBetweenRounds = 1;
    this->ReloadAndRestockWeaponsEachRound = 0;
    this->bIsRelevantThisRound = false;
    this->Active = 0;
    this->bActiveDuringMinigame = true;
    this->WinningTeamOnMessageReceived = 0;
    this->LastTeamStandingWins = 0;
    this->DefaultRestockAmmoAmount = 0;
}

