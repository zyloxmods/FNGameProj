#include "MatchmakingParams.h"

FMatchmakingParams::FMatchmakingParams() {
    this->ControllerId = 0;
    this->PartySize = 0;
    this->PlaylistId = 0;
    this->MatchmakingLevel = 0;
    this->MissionDifficultyMin = 0;
    this->MissionDifficultyMax = 0;
    this->StormShieldDefenseType = EStormShieldDefense::StormShieldExpansion;
    this->StartWith = EMatchmakingStartLocation::Lobby;
    this->Flags = EMatchmakingFlags::None;
    this->ChanceToHostOverride = 0.00f;
    this->ChanceToHostIncrease = 0.00f;
    this->NumAttempts = 0;
    this->MaxSearchResultsOverride = 0;
    this->MaxProcessedSearchResults = 0;
}

