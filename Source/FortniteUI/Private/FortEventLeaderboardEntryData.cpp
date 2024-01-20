#include "FortEventLeaderboardEntryData.h"

bool UFortEventLeaderboardEntryData::ShouldShowQualifiedIcon() const {
    return false;
}

int32 UFortEventLeaderboardEntryData::GetTotalVictoryRoyales() const {
    return 0;
}

int32 UFortEventLeaderboardEntryData::GetTotalPointsForCategory(FName ScoreCategoryId) const {
    return 0;
}

int32 UFortEventLeaderboardEntryData::GetTotalMatchesPlayed() const {
    return 0;
}

int32 UFortEventLeaderboardEntryData::GetTotalEliminations() const {
    return 0;
}

void UFortEventLeaderboardEntryData::GetTeammateDisplayNames(TArray<FString>& DisplayNames) const {
}

FText UFortEventLeaderboardEntryData::GetTeamDisplayNameText() const {
    return FText::GetEmpty();
}

FString UFortEventLeaderboardEntryData::GetTeamAccountId(int32 Index) const {
    return TEXT("");
}

int32 UFortEventLeaderboardEntryData::GetScore() const {
    return 0;
}

int32 UFortEventLeaderboardEntryData::GetRank() const {
    return 0;
}

int32 UFortEventLeaderboardEntryData::GetPageIndex() const {
    return 0;
}

int32 UFortEventLeaderboardEntryData::GetNumTeammates() const {
    return 0;
}

FString UFortEventLeaderboardEntryData::GetLiveSessionId() const {
    return TEXT("");
}

FString UFortEventLeaderboardEntryData::GetEventWindowId() const {
    return TEXT("");
}

FString UFortEventLeaderboardEntryData::GetEventId() const {
    return TEXT("");
}

float UFortEventLeaderboardEntryData::GetAveragePlacement() const {
    return 0.0f;
}

float UFortEventLeaderboardEntryData::GetAverageMatchScore() const {
    return 0.0f;
}

bool UFortEventLeaderboardEntryData::DoesLeaderboardHaveQualifiedIcons() const {
    return false;
}

UFortEventLeaderboardEntryData::UFortEventLeaderboardEntryData() {
}

