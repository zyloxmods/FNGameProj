#include "FortPartyMemberRepData.h"

FFortPartyMemberRepData::FFortPartyMemberRepData() {
    this->Location = EFortPartyMemberLocation::PreLobby;
    this->MatchmakingLevel = 0;
    this->HomeBaseVersion = 0;
    this->HasPreloadedAthena = false;
    this->NumAthenaPlayersLeft = 0;
    this->SpectateAPartyMemberAvailable = false;
    this->GameReadiness = EGameReadiness::NotReady;
    this->InGameReadyCheckStatus = EFortPartyMemberReadyCheckStatus::None;
    this->HiddenMatchmakingDelayMax = 0;
    this->ReadyInputType = ECommonInputType::MouseAndKeyboard;
    this->CurrentInputType = ECommonInputType::MouseAndKeyboard;
    this->FeatDefinition = NULL;
    this->VoiceChatStatus = EPartyMemberVoiceChatStatus::Disabled;
}

