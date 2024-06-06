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
    RoundIndex = 0;
    KeepItemsBetweenRounds = 0;
    PercentageOfResourcesKeptBetweenRounds = 1;
    ReloadAndRestockWeaponsEachRound = 0;
    bIsRelevantThisRound = false;
    Active = 0;
    bActiveDuringMinigame = true;
    WinningTeamOnMessageReceived = 0;
    LastTeamStandingWins = 0;
    DefaultRestockAmmoAmount = 0;
}

