#include "FortShowdownDetailView.h"

bool UFortShowdownDetailView::ShouldShowCrossplayError() const {
    return false;
}

void UFortShowdownDetailView::SetTournament(const FString& TournamentId, const FString& EventId) {
}


bool UFortShowdownDetailView::IsWorldCupQualifierEvent() const {
    return false;
}

bool UFortShowdownDetailView::IsFloatingLeaderboardAvailable() const {
    return false;
}

bool UFortShowdownDetailView::IsEventLeaderboardAvailable() const {
    return false;
}

bool UFortShowdownDetailView::HasScoreInEvent() const {
    return false;
}

FText UFortShowdownDetailView::GetWindowSessionDisplayString() const {
    return FText::GetEmpty();
}

FText UFortShowdownDetailView::GetWindowRoundDisplayString() const {
    return FText::GetEmpty();
}

FText UFortShowdownDetailView::GetWindowRoundAndSessionDisplayString() const {
    return FText::GetEmpty();
}

EFortShowdownEventState UFortShowdownDetailView::GetTournamentTimeState() const {
    return EFortShowdownEventState::Unknown;
}

FTimespan UFortShowdownDetailView::GetTournamentTimeLeft() const {
    return FTimespan{};
}

FString UFortShowdownDetailView::GetTournamentSeriesId() {
    return TEXT("");
}

TArray<FFortShowdownScoringRuleInfo> UFortShowdownDetailView::GetTournamentScoringRules() {
    return TArray<FFortShowdownScoringRuleInfo>();
}

int32 UFortShowdownDetailView::GetTournamentPinUnlockScore() const {
    return 0;
}

FString UFortShowdownDetailView::GetTournamentNextEvent() const {
    return TEXT("");
}

EFortShowdownMatchType UFortShowdownDetailView::GetTournamentMatchType() const {
    return EFortShowdownMatchType::Unknown;
}

int32 UFortShowdownDetailView::GetTournamentMatchCap() const {
    return 0;
}

FString UFortShowdownDetailView::GetTournamentId() const {
    return TEXT("");
}

TArray<FString> UFortShowdownDetailView::GetTournamentEvents() {
    return TArray<FString>();
}

FDateTime UFortShowdownDetailView::GetTournamentEndTime() const {
    return FDateTime{};
}

EFortEventWindowEligibility UFortShowdownDetailView::GetTournamentEligibility() const {
    return EFortEventWindowEligibility::Unknown;
}

int32 UFortShowdownDetailView::GetTournamentBestScore() const {
    return 0;
}

EFortShowdownPinState UFortShowdownDetailView::GetTournamentBestPinState() const {
    return EFortShowdownPinState::None;
}

FDateTime UFortShowdownDetailView::GetTournamentBeginTime() const {
    return FDateTime{};
}

int32 UFortShowdownDetailView::GetNumEventRounds() const {
    return 0;
}

int32 UFortShowdownDetailView::GetEventWindowSessionNumber() const {
    return 0;
}

int32 UFortShowdownDetailView::GetEventWindowRoundNumber() const {
    return 0;
}

EFortEventWindowEligibility UFortShowdownDetailView::GetEventWindowEligibility() const {
    return EFortEventWindowEligibility::Unknown;
}

EFortShowdownEventState UFortShowdownDetailView::GetEventTimeState() const {
    return EFortShowdownEventState::Unknown;
}

FText UFortShowdownDetailView::GetEventTimespanAsText(FTimespan InTimeRemaining, bool bShowSeconds, ETimespanAsTextFormat FormatType) const {
    return FText::GetEmpty();
}

FTimespan UFortShowdownDetailView::GetEventTimeLeft() const {
    return FTimespan{};
}

FText UFortShowdownDetailView::GetEventTimeAsText(FDateTime DateTime, EFortDateTimeStyle Style) const {
    return FText::GetEmpty();
}

FFortShowdownEventBestResultsSummary UFortShowdownDetailView::GetEventResultsSummary() {
    return FFortShowdownEventBestResultsSummary{};
}

EFortShowdownEventState UFortShowdownDetailView::GetEventPlayerParticipationState() const {
    return EFortShowdownEventState::Unknown;
}

EFortShowdownPinState UFortShowdownDetailView::GetEventPinState() const {
    return EFortShowdownPinState::None;
}

int32 UFortShowdownDetailView::GetEventLeaderboardRank() const {
    return 0;
}

float UFortShowdownDetailView::GetEventLeaderboardPercentile() const {
    return 0.0f;
}

FString UFortShowdownDetailView::GetEventIdForEligibilityToken(const FString& Token) const {
    return TEXT("");
}

FString UFortShowdownDetailView::GetEventId() {
    return TEXT("");
}

FDateTime UFortShowdownDetailView::GetEventEndTime() const {
    return FDateTime{};
}

FText UFortShowdownDetailView::GetEventDateAsText(FDateTime DateTime, EFortDateTimeStyle Style) const {
    return FText::GetEmpty();
}

FDateTime UFortShowdownDetailView::GetEventBeginTime() const {
    return FDateTime{};
}

FText UFortShowdownDetailView::GetCurrentRegionName() const {
    return FText::GetEmpty();
}

int32 UFortShowdownDetailView::GetCurrentEventTeamNumMatchesPlayed() const {
    return 0;
}

int32 UFortShowdownDetailView::GetCurrentEventScore() const {
    return 0;
}

int32 UFortShowdownDetailView::GetBestEventScore() const {
    return 0;
}

bool UFortShowdownDetailView::DoDisplayRoundNumber() const {
    return false;
}

bool UFortShowdownDetailView::DoCalloutMFARequirement() const {
    return false;
}

FLinearColor UFortShowdownDetailView::ConvertCMSStringToColor(const FString& ColorString) {
    return FLinearColor{};
}

UFortShowdownDetailView::UFortShowdownDetailView() {
    this->Text_TimeRemaining = NULL;
    this->Text_DebugId = NULL;
    this->Image_PosterFront = NULL;
    this->Image_PosterBack = NULL;
    this->Image_LoadingScreen = NULL;
    this->Image_PlaylistTile = NULL;
    this->bTimeRemainingShowSeconds = false;
    this->bTimeRemainingUppercase = false;
    this->TimeRemainingFormatType = ETimespanAsTextFormat::DaysHoursMinutesSeconds;
}

