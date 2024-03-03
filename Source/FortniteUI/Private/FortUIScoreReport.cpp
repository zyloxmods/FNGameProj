#include "FortUIScoreReport.h"

bool UFortUIScoreReport::IsLocalPlayer(int32 ScoreReportIndex) const {
    return false;
}

int32 UFortUIScoreReport::GetXpToCompleteLevel(int32 Level) const {
    return 0;
}

bool UFortUIScoreReport::GetXpInfo(int32 ScoreReportIndex, FFortUIXpInfo& OutXpInfo) const {
    return false;
}

int32 UFortUIScoreReport::GetTeamScore(TEnumAsByte<EFortUIScoreType::Type> ScoreType) const {
    return 0;
}

void UFortUIScoreReport::GetScoreReportIndicesByPlayerID(TArray<int32>& SortedScoreReportIndices) const {
}

int32 UFortUIScoreReport::GetScoreReportIndex(const FUniqueNetIdRepl& PlayerId) const {
    return 0;
}

int32 UFortUIScoreReport::GetPlayerScore(int32 ScoreReportIndex, TEnumAsByte<EFortUIScoreType::Type> ScoreType) const {
    return 0;
}

FString UFortUIScoreReport::GetPlayerPlatform(int32 ScoreReportIndex) const {
    return TEXT("");
}

FText UFortUIScoreReport::GetPlayerName(int32 ScoreReportIndex) const {
    return FText::GetEmpty();
}

void UFortUIScoreReport::GetPlayerIDFromScoreReportIndex(int32 ScoreReportIndex, FUniqueNetIdRepl& OutUniqueNetIdRepl) const {
}

int32 UFortUIScoreReport::GetPlayerCount() const {
    return 0;
}

float UFortUIScoreReport::GetLevelProgress(int32 Level, int32 DisplayXp) const {
    return 0.0f;
}

int32 UFortUIScoreReport::GetDifficultBonusScore() const {
    return 0;
}

float UFortUIScoreReport::GetDifficultBonusMultiplier() const {
    return 0.0f;
}

AFortPlayerState* UFortUIScoreReport::GetCurrentPlayerState(int32 ScoreReportIndex) const {
    return NULL;
}

AFortPlayerPawn* UFortUIScoreReport::GetCurrentPlayerPawn(int32 ScoreReportIndex) const {
    return NULL;
}

int32 UFortUIScoreReport::GetBadgeScore(UFortItem* BadgeItem) const {
    return 0;
}

UFortUIScoreReport::UFortUIScoreReport() {
    this->LocalPlayer = NULL;
}

