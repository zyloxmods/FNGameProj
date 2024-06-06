#include "MatchmakingParams.h"

FMatchmakingParams::FMatchmakingParams() {
    ControllerId = 0;
    PartySize = 0;
    PlaylistId = 0;
    MatchmakingLevel = 0;
    MissionDifficultyMin = 0;
    MissionDifficultyMax = 0;
    StormShieldDefenseType = EStormShieldDefense::NotSSD;
    StartWith = EMatchmakingStartLocation::Lobby;
    Flags = EMatchmakingFlags::None;
    ChanceToHostOverride = 1;
    ChanceToHostIncrease = 1;
    NumAttempts = 0;
    MaxSearchResultsOverride = 0;
    MaxProcessedSearchResults = 0;
}

