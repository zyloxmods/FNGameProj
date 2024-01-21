#include "FortPartyRepData.h"

FFortPartyRepData::FFortPartyRepData() {
    this->PartyState = EFortPartyState::Undetermined;
    this->LobbyConnectionStarted = false;
    this->MatchmakingResult = EMatchmakingCompleteResult::NotStarted;
    this->MatchmakingState = EMatchmakingState::NotMatchmaking;
    this->SessionIsCriticalMission = false;
    this->ZoneTileIndex = 0;
    this->AllowJoinInProgress = false;
    this->AthenaSquadFill = false;
    this->PartyIsJoinedInProgress = false;
}

