#include "AthenaGameOverDisplay.h"

void UAthenaGameOverDisplay::OnWinningScoreDetermined(int32 Score) {
}

void UAthenaGameOverDisplay::OnWinnerAnnounced(const FString& Winner) {
}

void UAthenaGameOverDisplay::OnViewTargetChanged() {
}

void UAthenaGameOverDisplay::OnToggleFullscreenMap(bool bFullscreenMapVisible) {
}

void UAthenaGameOverDisplay::OnSpectatorStreamingChanged(bool bSpectatorStreaming) {
}

void UAthenaGameOverDisplay::OnSpecialActorListChanged() {
}

void UAthenaGameOverDisplay::OnRessurectingNowDelegate(bool bRessurectingNow) {
}

void UAthenaGameOverDisplay::OnPlayerOrTeamWon() {
}

void UAthenaGameOverDisplay::OnPlayerLost(EEndOfMatchReason LostReason) {
}

void UAthenaGameOverDisplay::OnPlaceChanged() {
}

void UAthenaGameOverDisplay::OnPawnDied(const FFortPlayerDeathReport& DeathReport) {
}

void UAthenaGameOverDisplay::OnKillFeedUpdated() {
}

void UAthenaGameOverDisplay::InGameMatchmakingComplete(bool bSuccess) {
}

void UAthenaGameOverDisplay::HighlightCountChanged(int32 HighlightCount) {
}

void UAthenaGameOverDisplay::HandleToggledBattleMapLive(ABattleMapPawnLive* NewSpectatorPawn) {
}

UAthenaGameOverDisplay::UAthenaGameOverDisplay() {
    this->MatchStatsClass = NULL;
    this->EliminatedOverlay = NULL;
    this->Button_Highlights = NULL;
}

