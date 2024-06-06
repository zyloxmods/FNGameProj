#include "FortPartyMemberRepData.h"

FFortPartyMemberRepData::FFortPartyMemberRepData() {
    Location = EFortPartyMemberLocation::PreLobby;
    MatchmakingLevel = 0;
    HomeBaseVersion = 0;
    HasPreloadedAthena = false;
    NumAthenaPlayersLeft = 0;
    SpectateAPartyMemberAvailable = false;
    GameReadiness = EGameReadiness::NotReady;
    InGameReadyCheckStatus = EFortPartyMemberReadyCheckStatus::None;
    HiddenMatchmakingDelayMax = 0;
    ReadyInputType = ECommonInputType::MouseAndKeyboard;
    CurrentInputType = ECommonInputType::MouseAndKeyboard;
    FeatDefinition = NULL;
    VoiceChatStatus = EPartyMemberVoiceChatStatus::Disabled;
}

