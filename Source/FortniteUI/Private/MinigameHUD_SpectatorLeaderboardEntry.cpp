#include "MinigameHUD_SpectatorLeaderboardEntry.h"




UMinigameHUD_SpectatorLeaderboardEntry::UMinigameHUD_SpectatorLeaderboardEntry() {
    this->Text_Standing = NULL;
    this->Image_Avatar = NULL;
    this->Image_BackgroundBase = NULL;
    this->Image_BackgroundShape = NULL;
    this->Image_BackgroundShape_Bottom = NULL;
    this->Text_Score = NULL;
    this->Text_EndScore = NULL;
    this->Text_ScoreOnly = NULL;
    this->Text_ScoreTime = NULL;
    this->Text_SmallScoreTime = NULL;
    this->CachedMinigameTeamIdClass = NULL;
    this->CachedEntryType = ESpectatorLeaderboardEntryType::ScoreWithEndScore;
}

