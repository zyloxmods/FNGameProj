#include "MatchmakingParams.h"

FMatchmakingParams::FMatchmakingParams() {
    this->ControllerId = 0;
    this->PartySize = 0;
    this->PlaylistId = 0;
    this->MatchmakingLevel = 0;
    this->MissionDifficultyMin = 0;
    this->MissionDifficultyMax = 0;
    this->StormShieldDefenseType = EStormShieldDefense::NotSSD;
    this->StartWith = EMatchmakingStartLocation::Lobby;
    this->Flags = EMatchmakingFlags::None;
    this->ChanceToHostOverride = 1;
    this->ChanceToHostIncrease = 1;
    this->NumAttempts = 0;
    this->MaxSearchResultsOverride = 0;
    this->MaxProcessedSearchResults = 0;
}

